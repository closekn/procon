#include <bits/stdc++.h>
using namespace std;

const int LIM = 1e9;

int main() {
  int n, l;
  int t1, t2, t3;
  cin >> n >> l;
  bool hurdle[l+1];
  int road[l+1];
  for ( int i = 0; i <= l; i++ ) {
    hurdle[i] = false;
    road[i] = LIM;
  }
  for ( int i = 0; i < n; i++ ) {
    int h;
    cin >> h;
    hurdle[h] = true;
  }
  cin >> t1 >> t2 >> t3;

  road[0] = 0;
  for ( int i = 0; i < l; i++ ) {
    int t = ( hurdle[i] ) ? t3+road[i] : road[i];
    road[i+1] = ( road[i+1] > t+t1 ) ? t+t1 : road[i+1];
    if ( i <= l-2 ) { road[i+2] = ( road[i+2] > t+t1+t2 ) ? t+t1+t2 : road[i+2]; }
    if ( i <= l-4  ) { road[i+4] = ( road[i+4] > t+t1+t2*3 ) ? t+t1+t2*3 : road[i+4]; }
    if ( i > l-4 ) {
      road[l] = ( road[l] > t+(t1/2)+(t2/2)+(t2*(l-1-i)) ) ? t+(t1/2)+(t2/2)+(t2*(l-1-i)) : road[l];
    }
  }

  cout << road[l] << endl;
  return 0;
}
