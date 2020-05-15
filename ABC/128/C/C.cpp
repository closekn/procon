#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, ans = 0;
  cin >> n >> m;
  int k[m], s[m][n], p[m];
  int sw[n+1];
  for ( int i = 0; i < m; i++ ) {
    cin >> k[i];
    for ( int j = 0; j < k[i]; j++ ) {
      cin >> s[i][j];
    }
  }
  for ( int i = 0; i < m; i++ ) {
    cin >> p[i];
  }

  for ( int z = 0; z < pow(2,n); z++ ) {
    int tmp = z;
    for ( int l = 1; l <= n; l++ ) {
      sw[l] = ( tmp%2 == 1 ) ? true : false;
      tmp >>= 1;
    }
    bool flag = true;
    for ( int i = 0; i < m; i++ ) {
      int ct = 0;
      for ( int j = 0; j < k[i]; j++ ) {
        ct += ( sw[s[i][j]] ) ? 1 :0;
      }
      if ( ct%2 != p[i] ) { flag = false; break; }
    }
    if ( flag ) { ans++; }
  }

  cout << ans;
  return 0;
}