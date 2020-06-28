#include <iostream>
#include <vector>
using namespace std;

/**
 * @link ./pow_mod.cpp
 */
long long pow_mod(long long n, long long  k, long long m);

/**
 * @fn コンビネーション 素数mod指定
 * @brief nCr mod m の計算を行う (mは素数でないといけない)
 * @param (n) (r) nCr
 * @param (m) mod
 */
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

/**
 * @fn コンビネーションの記憶配列作成
 * @brief nCrにおける指定nに対する各rの記憶配列作成 (nCr = v[n][r])
 * @param (n) nCrにおけるn
 * @return nCr = v[n][r] となるv
 */
vector<vector<long long> > comb(int n) {
  vector<vector<long long> > v(n+1, vector<long long>(n+1, 0));
  for ( int i = 0; i < v.size(); i++ ) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for ( int j = 1; j < v.size(); j++ ) {
    for ( int k = 1; k < j; k++ ) {
      v[j][k] = (v[j-1][k-1] + v[j-1][k]);
    }
  }
  return v;
}
