#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

struct BinomialCoefficient {
  vector<long long> fac, finv, inv;

  BinomialCoefficient(int N) : fac(N), finv(N), inv(N) {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for ( int i = 2; i < N; i++ ) {
        fac[i] = fac[i-1] * i % mod;
        inv[i] = mod - inv[mod%i] * (mod / i) % mod;
        finv[i] = finv[i-1] * inv[i] % mod;
    }
  }

  long long combination(int n, int k) {
    if ( n < k ) { return 0; }
    if ( n < 0 || k < 0 ) { return 0; }
    return fac[n] * (finv[k] * finv[n - k] % mod) % mod;
  }
};

int main() {
  int n, k;
  cin >> n >> k;
  BinomialCoefficient BC(n+1);

  if ( k > n ) { k = n; }

  long long ans = 0;
  for ( int i = 0; i <= k; i++ ) {
    ans += (BC.combination(n, i) * BC.combination(n-1, i)) % mod;
    ans %= mod;
  }

  cout << ans << endl;
  return 0;
}
