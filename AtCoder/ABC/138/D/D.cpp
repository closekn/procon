#include <bits/stdc++.h>
using namespace std;

const int NODE_MAX = 200000;
vector<int> tree[NODE_MAX+1];

void dfs(int my, int par, vector<long long> &ct) {
  ct[my] += ct[par];
  for ( int i = 0; i < tree[my].size(); i++ ) {
    if ( tree[my][i] == par ) { continue; }
    dfs(tree[my][i], my, ct);
  }
}

int main() {
  int n, q;
  cin >> n >> q;

  tree[0].push_back(1);
  for ( int i = 0; i < n-1; i++ ) {
    int a, b;
    cin >> a >> b;
    tree[a].push_back(b);
    tree[b].push_back(a);
  }
  
  vector<long long> ct(n+1, 0);
  while ( q-- > 0 ) {
    int p, x;
    cin >> p >> x;
    ct[p] += x;
  }

  dfs(1, 0, ct);

  for ( int i = 1; i <= n; i++ ) {
    cout << ct[i] << ' ';
  }
  cout << endl;
  return 0;
}
