#include <iostream>

/**
 * @fn 最大公約数を求める
 * @param (a) (b) 基となる2数
 * @return 最大公約数
 */
int gcd(int a, int b) {
  int tmp;
  while ( a%b != 0 ) {
    tmp = b;
    b = a % b;
    a = tmp;
  }
  return b;
}
