#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

int main() {
  long long n, k;
  cin >> n >> k;

  long long ans = 0;
  for ( long long i = k; i <= n+1; i++ ) {
    long long mn = ( (i-1) * i / 2 ) % mod;
    long long mx = ( ((n-i+1)+n) * i / 2 ) % mod;
    ans += mx - mn + 1;
    ans %= mod;
  }
  ans = ( ans < 0 ) ? ans+mod : ans;
  cout << ans << endl;
  return 0;
}
