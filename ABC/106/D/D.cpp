#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  int g[n+1][n+1];
  int dp[n+1][n+1];
  for ( int l = 0; l <= n; l++ ) {
    for ( int r = 0; r <= n; r++ ) {
      g[l][r] = 0;
      dp[l][r] = 0;
    }
  }

  for ( int i = 0; i < m; i++ ) {
    int l, r;
    cin >> l >> r;
    g[l][r]++;
  }

  for ( int l = 1; l <= n; l++ ) {
    for ( int r = 1; r <= n; r++ ) {
      dp[l][r] += dp[l][r-1] + g[l][r];
    }
  }

  for ( int que = 0; que < q; que++ ) {
    int l, r;
    cin >> l >> r;
    int ans = 0;
    for ( int i = l; i <= r; i++ ) {
      ans += dp[i][r] - dp[i][l-1];
    }
    cout << ans << endl;
  }
  return 0;
}
