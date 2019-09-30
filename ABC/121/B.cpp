#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, c;
  cin >> n >> m >> c;
  int a[n][m], b[m];
  for ( int i = 0; i < m; i++ ) { cin >> b[i]; }
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < m; j++ ) {
      cin >> a[i][j];
    }
  }

  int ans = 0;
  for ( int i = 0; i < n; i++ ) {
    int sm = 0;
    for ( int j = 0; j < m; j++ ) {
      sm += a[i][j]*b[j];
    }
    ans = ( sm+c > 0 ) ? ans+1 : ans;
  }

  cout << ans << endl;
  return 0;
}
