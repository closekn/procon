#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
  vector<int> par;
  vector<int> siz;

  UnionFind(int N) : par(N), siz(N, 1) {
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
    if ( siz[rx] < siz[ry] ) { swap(rx, ry); }
    par[ry] = rx;
    siz[rx] += siz[ry];
  }

  int size(int x) {
    return siz[root(x)];
  }

  bool same(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }
};

int main() {
  int n, m;
  cin >> n >> m;
  UnionFind tree(n+1);
  for ( int i = 0; i < m; i++ ) {
    int a, b;
    cin >> a >> b;
    tree.unite(a, b);
  }

  int ans = 0;
  for ( int i = 1; i <= n; i++ ) {
    ans = max(ans, tree.size(i));
  }

  cout << ans << endl;
  return 0;
}
