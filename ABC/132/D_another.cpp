// n!の記憶配列から解く

#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

void factorial(long long f[], int n) {
  f[0] = 1;
  for ( int i = 1; i <= n; i++ ) {
    f[i] = i * f[i-1];
    f[i] %= mod;
  }
}

long long nCr(int n, int r, long long f[]) {
  return f[n] / ( f[r] * f[n-r] );
}

int main() {
  int n, k;
  cin >> n >> k;
  
  long long f[n+1];
  factorial(f, n);

  for ( int i = 1; i <= k; i++ ) {
    if ( i+1 <= n-k+2 ) {
      cout << ( nCr(k-1, i-1, f)%mod * nCr(n-k+1, i, f)%mod ) % mod << endl;
    } else {
      cout << 0 << endl;
    }
  }

  return 0;
}