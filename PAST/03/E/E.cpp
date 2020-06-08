#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  int c[n];
  vector<int> a[n];
  for ( int i = 0; i < m; i++ ) {
    int u, v;
    cin >> u >> v;
    u--; v--;
    a[u].push_back(v);
    a[v].push_back(u);
  }
  for ( int i = 0; i < n; i++ ) {
    cin >> c[i];
  }

  while ( q-- > 0 ) {
    int mode, x, y;
    cin >> mode >> x;
    x--;
    cout << c[x] << endl;
    if ( mode == 1 ) {
      for ( int i = 0; i < a[x].size(); i++ ) {
        c[a[x][i]] = c[x];
      }
    }
    if ( mode == 2 ) {
      cin >> y;
      c[x] = y;
    }
  }

  return 0;
}
