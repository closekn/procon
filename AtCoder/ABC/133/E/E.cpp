#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll mod = 1e9 + 7;
const int MAX_NODE = 1e5 + 5;

vector<int> g[MAX_NODE];

ll dfs(int cur, int par, int k) {
  ll ret = 1;
  ll can_k = ( par != 0 ) ? k-2 : k-1;

  for ( int i = 0; i < g[cur].size(); i++ ) {
    if ( g[cur][i] == par ) { continue; }
    ret = ret * can_k-- % mod;
  }
  for ( int i = 0; i < g[cur].size(); i++ ) {
    if ( g[cur][i] == par ) { continue; }
    ret = ret * dfs(g[cur][i], cur, k) % mod;
  }

  return ret;
}

int main() {
  int n, k;
  cin >> n >> k;

  for ( int i = 0; i < n-1; i++ ) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  ll ans = k * dfs(1, 0, k) % mod;
  cout << ans << endl;
  return 0;
}
