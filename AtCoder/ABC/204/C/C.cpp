#include <bits/stdc++.h>
using namespace std;

bool ch[2000];
vector<int> ro[2000];
void dfs(int node) {
  if ( ch[node] ) { return; }
  ch[node] = true;
  for ( int i = 0; i < ro[node].size(); i++ ) { dfs(ro[node][i]); }
}

int main() {
  int n, m;
  cin >> n >> m;

  for ( int i = 0; i < m; i++ ) {
    int a, b;
    cin >> a >> b;
    ro[a-1].push_back(b-1);
  }

  int ans = 0;
  for ( int s = 0; s < n; s++ ) {
    for ( int i = 0; i < n; i++ ) { ch[i] = false; }
    dfs(s);
    for ( int i = 0; i < n; i++ ) { if ( ch[i] ) { ans++; } }
  }

  cout << ans << endl;
  return 0;
}
