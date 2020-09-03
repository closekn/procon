#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

int main() {
  int n;
  cin >> n;
  long long a[n];
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }
  
  long long sm[n];
  sm[0] = a[0];
  for ( int i = 1; i < n; i++ ) {
    sm[i] = sm[i-1] + a[i];
    sm[i] %= mod;
  }

  long long ans = 0;
  for ( int i = 0; i < n; i++ ) {
    ans += ((sm[n-1]-sm[i]+mod)%mod * a[i]) % mod;
    ans %= mod;
  }

  cout << ans << endl;
  return 0;
}
