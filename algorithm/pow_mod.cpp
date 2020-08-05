using namespace std;

const long long mod = 1e9 + 7;

/**
 * @fn 繰り返し二乗法
 * @brief n^k mod m をO(log k)で求める
 * @param (n) 根
 * @param (k) 指数
 */
long long pow_mod(long long n, long long  k) {
  if ( k == 0 ) { return 1; }
  if ( k%2 == 0 ) {
    long long t = pow_mod(n, k/2);
    return t*t % mod;
  }
  return n * pow_mod(n, k-1) % mod;
}