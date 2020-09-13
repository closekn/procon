#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

int main() {
  int n;
  cin >> n;

  vector<vector<long long>> dp(n+1, vector<long long>(4, 0)); // 0:(ok), 1:(0 in A), 2:(9 in A), 3:(no 0&9 in A)
  dp[0][3] = 1;

  for ( int i = 1; i <= n; i++ ) {
    // 3
    dp[i][3] += (dp[i-1][3] * 8) % mod;  dp[i][3] %= mod;
    // 2
    dp[i][2] += dp[i-1][3];              dp[i][2] %= mod;
    dp[i][2] += (dp[i-1][2] * 9) % mod;  dp[i][2] %= mod;
    // 1
    dp[i][1] += dp[i-1][3];              dp[i][1] %= mod;
    dp[i][1] += (dp[i-1][1] * 9) % mod;  dp[i][1] %= mod;
    // 0
    dp[i][0] += dp[i-1][2];              dp[i][0] %= mod;
    dp[i][0] += dp[i-1][1];              dp[i][0] %= mod;
    dp[i][0] += (dp[i-1][0] * 10) % mod; dp[i][0] %= mod;
  }

  cout << dp[n][0] << endl;
  return 0;
}
