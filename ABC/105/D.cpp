#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m;
  cin >> n >> m;
  long long a[n+1];
  long long dp[n+1];
  a[0] = dp[0] = 0;
  for ( long long i = 1; i <= n; i++ ) {
    cin >> a[i];
    dp[i] = dp[i-1] + a[i];
  }

  unordered_map<long long, long long> um;
  for ( long long i = 0; i <= n; i++ ) {
    um[dp[i]%m]++;
  }

  long long ans = 0;
  for ( auto p:um ) {
    long long num = p.second;
    ans += num*(num-1)/2;
  }

  cout << ans << endl;
  return 0;
}
