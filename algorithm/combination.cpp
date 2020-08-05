#include <iostream>
#include <vector>
using namespace std;

const long long mod = 1e9 + 7;

/**
 * @struct 二項係数
 * @fn BinomialCoefficient(N) コンストラクタ 0~N事前テーブルの作成
 * @fn combination(n, k) nCk mod
 */
struct BinomialCoefficient {
  vector<long long> fac, finv, inv;

  BinomialCoefficient(int N) : fac(N), finv(N), inv(N) {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for ( int i = 2; i < N; i++ ) {
        fac[i] = fac[i-1] * i % mod;
        inv[i] = mod - inv[mod%i] * (mod / i) % mod;
        finv[i] = finv[i-1] * inv[i] % mod;
    }
  }

  long long combination(int n, int k) {
    if ( n < k ) { return 0; }
    if ( n < 0 || k < 0 ) { return 0; }
    return fac[n] * (finv[k] * finv[n - k] % mod) % mod;
  }
};

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
