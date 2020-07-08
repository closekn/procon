#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

long long pow_mod(long long n, long long  k, long long m) {
  if ( k == 0 ) { return 1; }
  if ( k%2 == 0 ) {
    long long t = pow_mod(n, k/2, m);
    return t*t % m;
  }
  return n * pow_mod(n, k-1, m) % m;
}

long long comb_mod(long long n, long long r, long long m) {
  if ( r == 0 ) { return 1; }

  long long x = 1;
  for ( long long i = 1; i <= r; i++ ) {
    x *= n - r + i;
    x %= m;
  }

  long long y = 1;
  for ( long long i = 1; i <= r; i++ ) {
    y *= i;
    y %= m;
  }

  return x * pow_mod(y, m-2, m) % m;
}

int main() {
  long long x, y;
  cin >> x >> y;
  long long ans = 0;
  
  if ( (x+y)%3 == 0 ) {
    long long x1_y2 = (2*y - x) / 3;
    long long x2_y1 = y - 2*x1_y2;
    if ( x1_y2 >= 0 && x2_y1 >= 0 ) {
      ans = comb_mod(x1_y2+x2_y1, x1_y2, mod);
    } 
  }

  cout << ans << endl;
  return 0;
}
