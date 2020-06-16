#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int h[n];
  int ch[n];
  vector<int> edge[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> h[i];
    ch[i] = 0;
  }
  for ( int i = 0; i < m; i++ ) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }

  int s = 0;
  while ( s < n ) {
    for ( int i = 0; i < edge[s].size(); i++ ) {
      if ( h[s] >= h[edge[s][i]] ) { ch[edge[s][i]] = -1; }
      if ( h[s] <= h[edge[s][i]] ) { ch[s] = -1; }
    }
    if ( ch[s] == 0 ) { ch[s] = 1; }

    for ( ; s < n; s++ ) {
      if ( ch[s] == 0 ) { break; }
    }
  }

  int ans = 0;
  for ( int i = 0; i < n; i++ ) {
    if ( ch[i] == 1 ) { ans++; }
  }
  cout << ans << endl;
  return 0;
}
