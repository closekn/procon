#include <algorithm>
#include <vector>
using namespace std;

/**
 * @struct Union-Find tree
 * @fn UnionFind(N) コンストラクタ 0~Nまで自身が親の木を作成
 * @fn root(x) xの属する木の根を返却
 * @fn unite(x, y) xとyの属する木を結合(同じ木に属する場合は何もしない)
 * @fn same(x, y) xとyが同じ木に属するかどうかのbool値返却
 * @usage 適宜コンストラクタを変更
 */ 
struct UnionFind {
  vector<int> par;

  UnionFind(int N) : par(N) {
    for ( int i = 0; i < N; i++ ) { par[i] = i; }
  }

  int root(int x) { 
    if ( par[x] == x ) { return x; }
    return par[x] = root(par[x]);
  }

  void unite(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    if ( rx == ry ) { return; }
    par[rx] = ry;
  }

  bool same(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }
};