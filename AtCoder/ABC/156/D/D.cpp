#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

long long pow_mod(long long n, long long  k, long long m) {
  if ( k == 0 ) { return 1; }

  if ( k%2 == 0 ) {
    long long t = pow_mod(n, k/2, m);
    return t*t % m;
  }

  return n * pow_mod(n, k-1, mod) % m;
}

long long comb_mod(long long n, long long k, long long m) {
  if ( k == 0 ) { return 1; }

  long long x = 1;
  for ( long long i = 1; i <= k; i++ ) {
    x *= n - k + i;
    x %= m;
  }

  long long y = 1;
  for ( long long i = 1; i <= k; i++ ) {
    y *= i;
    y %= m;
  }

  return x * pow_mod(y, m-2, m) % m;
}

int main() {
  long long n, a, b;
  cin >> n >> a >> b;

  long long ans = pow_mod(2, n, mod) - 1;
  ans = (ans+mod - comb_mod(n, a, mod)) % mod;
  ans = (ans+mod - comb_mod(n, b, mod)) % mod;

  cout << ans << endl;
  return 0;
}
