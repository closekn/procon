#include <bits/stdc++.h>
using namespace std;

#define N_MAX 1000

int main() {
  int t;
  cin >> t;
  
  for ( int q = 0; q < t; q++ ) {
    int n;
    string r;
    cin >> n;
    cin >> r;
    int mn = N_MAX;
    for ( int i = 0; i < n; i++ ) {
      if ( r[i] == '0' ) { continue; }
      int tmp = ( i < n-i-1 ) ? i : n-i-1;
      mn = ( mn < tmp ) ? mn : tmp;
    }
    int ans = ( mn == N_MAX ) ? n : (n-mn)*2;
    cout << ans << endl;
  }

  return 0;
}
