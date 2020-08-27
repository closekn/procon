#include <vector>
using namespace std;

/**
 * @struct Fenwick Tree
 * @fn FenwicTree(N) コンストラクタ treeのsizeをNで初期化
 * @fn add(i, x) 累積和の更新 i番目以降にxを追加
 * @fn sum(i) 累積和の算出 区間[1,i]の累積和を求める
 * @fn range_sum(l, r) 区間[l,r]の累積和を求める
 */
struct FenwickTree {
  vector<int> bit;
  int siz;

  FenwickTree(int N) : bit(N) {
    siz = N;
    for ( int i = 0; i < siz; i++ ) { bit[i] = 0; }
  }

  void add(int i, int x) {
    for ( ; i < siz; i += i&-i ) { bit[i] += x; }
  }

  int sum(int i) {
    int sm = 0;
    for ( ; i > 0; i -= i&-i ) { sm += bit[i]; }
    return sm;
  }

  int range_sum(int l, int r) {
    return sum(r) - sum(l-1);
  }
};
