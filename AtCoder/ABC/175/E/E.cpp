#include <bits/stdc++.h>
using namespace std;

long long dp[3005][3005][4];
long long item[3005][3005];

int main() {
  int r, c, k;
  cin >> r >> c >> k;
  for ( int i = 0; i < k; i++ ) {
    int ri, ci;
    long long vi;
    cin >> ri >> ci >> vi;
    item[ri][ci] = vi;
  }

  for ( int i = 1; i <= r; i++ ) {
    for ( int j = 1; j <= c; j++ ) {
      for ( int l = 3; l > 0; l-- ) {
        dp[i][j][l] = max(dp[i][j][l], dp[i][j][l-1]+item[i][j]);
      }
      for ( int l = 0; l < 4; l++ ) {
        dp[i+1][j][0] = max(dp[i+1][j][0], dp[i][j][l]);
        dp[i][j+1][l] = max(dp[i][j+1][l], dp[i][j][l]);
      }
    }
  }

  long long ans = 0;
  for ( int l = 0; l < 4; l++ ) {
    ans = max(ans, dp[r][c][l]);
  }
  cout << ans << endl;;
  return 0;
}
