#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool x[6000], y[6000], d[n];
  int px[n]; py[n];
  for ( int i = 0; i < 6000; i++ ) {
    x[i] = false;
    y[i] = false;
  }
  for ( int i = 0; i < n; i++ ) {
    cin >> tx >> ty >> d[i];
    x[px[i]+py[i]] = true;
    y[px[i]-py[i]+3000] = true;
  }

  for ( int i = 0; i < n; i++ ) {
    int posx = px[i];
    int posy = py[i];
    int ans = 1;
    int ct = 0;
    while ( ct < d[i] ) {
      
    }
    cout << ans << endl;
  }

  return 0;
}
