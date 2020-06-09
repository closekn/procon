#include <cmath>
using namespace std;

/**
 * @fn 素数判定
 * @param (num) 判定対象の数
 * @return numが素数かの真偽値
 */
bool isPrime(int num) {
  if (num < 2)      { return false; }
  if (num == 2)     { return true; }
  if (num % 2 == 0) { return false; }

  double sqrtNum = sqrt(num);
  for ( int i = 3; i <= sqrtNum; i += 2 ) {
    if ( num % i == 0 ) { return false; }
  }

  return true;
}
