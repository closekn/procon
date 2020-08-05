#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e5 + 3;
const long long mod = 998244353;

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

long long pow_mod(long long n, long long  k) {
  if ( k == 0 ) { return 1; }
  if ( k%2 == 0 ) {
    long long t = pow_mod(n, k/2);
    return t*t % mod;
  }
  return n * pow_mod(n, k-1) % mod;
}

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  BinomialCoefficient BC(n);

  long long ans = 0;
  for ( int i = 0; i <= k; i++ ) {
    long long now = m;
    now = now * BC.combination(n-1, i) % mod;
    now = now * pow_mod(m-1, n-1-i) % mod;
    ans = (ans + now) % mod;
  }

  cout << ans << endl;
  return 0;
}
