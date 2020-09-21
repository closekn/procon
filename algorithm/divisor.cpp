#include <cmath>

/**
 * @fn 整数nの約数の個数を数える
 * @param (n) 約数の個数を数えたい整数
 * @return nの約数の個数
 */
long long divisor(long long n) {
  long long ret = 1;
  for ( int i = 2; i <= sqrt(n); i++ ) {
    int cnt = 0;
    while ( n % i == 0 ) {
      cnt++;
      n /= i;
    }
    ret *= (cnt + 1);
    if ( n == 1 ) { break; }
  }
  if ( n != 1 ) { ret *= 2; }
  return ret;
}
