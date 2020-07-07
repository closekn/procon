#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

int main() {
  int n;
  cin >> n;
  long long a[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
  }

  long long ans = 0;
  for ( int d = 0; d < 60; d++ ) {
    long long n0 = 0, n1 = 0;
    for ( int i = 0; i < n; i++ ) {
      if ( (a[i] >> d) & 1 ) { n1++; } else { n0++; }
    }
    long long num = n0 * n1 % mod;
    long long pow_2_d = (1ll << d) % mod;
    long long sum_d = num * pow_2_d % mod;
    ans += sum_d;
    ans %= mod;
  }

  cout << ans << endl;
  return 0;
}
