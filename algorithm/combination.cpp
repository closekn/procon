#include <iostream>
#include <vector>
using namespace std;

//-- nCr = v[n][r] の 記憶配列作成
/**
 * @fn nにおけるコンビネーション結果を作成
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
