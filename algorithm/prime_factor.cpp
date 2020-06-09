#include <iostream>
#include <map>
using namespace std;

/**
 * @fn 素因数分解
 * @param (n) 素因数分解する数
 * @return map first:素数 , second:何個
 * @detail 'for ( auto p = {$map}.begin(); p != {$map}.end(); p++ )' で回せる
 */ 
map<long long, int> prime_factor(long long n) {
  map<long long, int> ret;
  for (long long i = 2; i * i <= n; i++)  {
    while ( n % i == 0 ) {
      ret[i]++;
      n /= i;
    }
  }
  if ( n != 1 ) { ret[n] = 1; }
  return ret;
}
