#include <bits/stdc++.h>
using namespace std;

const long long mod = 998244353;

int main() {
  long long n;
  int k;
  cin >> n >> k;
  vector<pair<int, int>> range;
  for ( int i = 0; i < k; i++ ) {
    int l, r;
    cin >> l >> r;
    range.push_back({l, r+1});
  }

  vector<long long> dp(n);
  dp[0] = 1;
  for ( int i = 0; i < n; i++ ) {
    if ( i > 1 ) { dp[i] += dp[i-1]; dp[i] %= mod; }
    for ( int j = 0; j < k; j++ ) {
      int l, r;
      tie(l, r) = range[j];
      if ( i+l < n ) { dp[i+l] += dp[i]; dp[i+l] %= mod; }
      if ( i+r < n ) { dp[i+r] -= dp[i]; dp[i+r] += mod; dp[i+r] %= mod; }
    }
  }

  cout << dp[n-1] << endl;
  return 0;
}
