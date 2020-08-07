#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

int main() {
  string l;
  cin >> l;
  int n = l.size();

  long long dp[n+1][2];
  dp[0][0] = 1;
  dp[0][1] = 0;
  for ( int i = 0; i < n; i++ ) {
    if ( l[i] == '1' ) {
      dp[i+1][1] = (dp[i][1] * 3 + dp[i][0]) % mod;
      dp[i+1][0] = (dp[i][0] * 2) % mod;
    }
    if ( l[i] == '0' ) {
      dp[i+1][0] = dp[i][0];
      dp[i+1][1] = (dp[i][1] * 3) % mod;
    }
  }

  cout << (dp[n][0] + dp[n][1]) % mod << endl;
  return 0;
}
