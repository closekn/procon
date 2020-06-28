using namespace std;

/**
 * @fn 繰り返し二乗法
 * @brief n^k mod m をO(log k)で求める
 * @param (n) 根
 * @param (k) 指数
 * @param (m) mod
 */
long long pow_mod(long long n, long long  k, long long m) {
  if ( k == 0 ) { return 1; }
  if ( k%2 == 0 ) {
    long long t = pow_mod(n, k/2, m);
    return t*t % m;
  }
  return n * pow_mod(n, k-1, m) % m;
}