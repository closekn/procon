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
  long long n, m;
  cin >> n >> m;
  int a[m], b[m];
  for ( int i = 0; i < m; i++ ) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
  }

  UnionFind tree(n);
  long long ans[m+1];
  ans[m] = n * (n-1) / 2;
  for ( int i = m-1; i >= 0; i-- ) {
    if ( tree.same(a[i], b[i]) ) {
      ans[i] = ans[i+1];
    } else {
      ans[i] = ans[i+1] - (tree.size(a[i])*tree.size(b[i]));
      tree.unite(a[i], b[i]);
    }
  }

  for ( int i = 1; i <= m; i++ ) {
    cout << ans[i] << endl;
  }
  return 0;
}
