#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

long long pow_mod(int a, int b) {
  long long r = 1;
  if ( b == 0 ) { return 1; }
  for ( int i = 0; i < b; i++ ) {
    r *= a;
    r %= mod;
  }
  return r;
}

int main() {
  int n;
  cin >> n;
  int d[n];
  int dp[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> d[i];
    dp[i] = 0;
  }
  for ( int i = 0; i < n; i++ ) {
    dp[d[i]]++;
  }
  long long ans = 1;
  if ( dp[0] != 1 || d[0] != 0 ) {
    cout << 0 << endl; return 0;
  }
  for ( int i = 1; i < n-1; i++ ) {
    long long t = pow_mod(dp[i], dp[i+1]);
    ans *= t;
    ans %= mod;
  }
  cout << ans << endl;
  return 0;
}
