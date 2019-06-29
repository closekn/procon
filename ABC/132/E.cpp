#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int u[m], v[m];
  vector<vector <int> > line[n+1];
  for ( int i = 0; i < m; i++ ) {
    cin >> u[i] >> v[i];
    line[u[i]].push_back(v[i]);
    line[v[i]].push_back(u[i]);
  }
  int s, t;
  cin >> s >> t;
  vector<vector <int> > kenpa[n+1];
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 0; j < line[i].length(); j++ ) {
      for ( int k = 0; k < line[line[i][j]].length(); k++ ) {
        if ( i == line[line[i][j]][k] ) { continue; }
        for ( int l = 0; l < line[line[line[i][j]][k]].length(); l++ ) {
          if ( line[line[line[i][j]][k]][l] != line[i][j] ) {
            kenpa[i].push_back(line[line[line[i][j]][k]][l]);
          }
        }
      }
    }
    
  }

  return 0;
}