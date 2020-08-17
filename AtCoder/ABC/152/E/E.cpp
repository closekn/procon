#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

map<long long, long long> prime_factor(long long n) {
  map<long long, long long> ret;
  for (long long i = 2; i * i <= n; i++)  {
    while ( n % i == 0 ) {
      ret[i]++;
      n /= i;
    }
  }
  if ( n != 1 ) { ret[n] = 1; }
  return ret;
}

long long pow_mod(long long n, long long  k) {
  if ( k == 0 ) { return 1; }
  if ( k%2 == 0 ) {
    long long t = pow_mod(n, k/2);
    return t*t % mod;
  }
  return n * pow_mod(n, k-1) % mod;
}

int main() {
  int n;
  cin >> n;
  long long a[n];
  map<long long, long long> lcm_pf;
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
    for ( auto p : prime_factor(a[i]) ) {
      lcm_pf[p.first] = max(lcm_pf[p.first], p.second);
    }
  }

  long long lcm = 1;
  for ( auto p : lcm_pf ) {
    lcm *= pow_mod(p.first, p.second);
    lcm %= mod;
  }

  long long ans = 0;
  for ( int i = 0; i < n; i++ ) {
    ans += lcm * pow_mod(a[i], mod-2);
    ans %= mod;
  }

  cout << ans << endl;
  return 0;
}
