#include <bits/stdc++.h>
using namespace std;

int INF = 1e9 + 7;
#define MAX_V 401

struct edge {
  int to;
  int cost;
};

int V;
vector<edge> G[MAX_V];
int d[MAX_V][MAX_V];

void warshall_floyd() {
  for ( int i = 0; i < V; i++ ) {
    fill(d[i], d[i]+V, INF);
    d[i][i] = 0;
    for ( int j = 0; j < G[i].size(); j++ ) {
      edge e = G[i][j];
      d[i][e.to] = e.cost;
    }
  }

  for ( int k = 0; k < V; k++ ){
    for ( int i = 0; i < V; i++ ) {
      for ( int j = 0; j < V; j++ ) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}

int main() {
  int h, w;
  cin >> h >> w;
  int s[h][w];
  V = 0;
  for ( int i = 0; i < h; i++ ) {
    for ( int j = 0; j < w; j++ ) {
      char c;
      cin >> c;
      if ( c == '.' ) { s[i][j] = V++; } else { s[i][j] = -1; }
    }
  }

  for ( int i = 0; i < h; i++ ) {
    for ( int j = 0; j < w; j++ ) {
      if ( s[i][j] != -1 ) {
        edge e; e.cost = 1;
        if ( i-1 >= 0 && s[i-1][j] != -1 ) { e.to = s[i-1][j]; G[s[i][j]].push_back(e); }
        if ( i+1 < h  && s[i+1][j] != -1 ) { e.to = s[i+1][j]; G[s[i][j]].push_back(e); }
        if ( j-1 >= 0 && s[i][j-1] != -1 ) { e.to = s[i][j-1]; G[s[i][j]].push_back(e); }
        if ( j+1 < w  && s[i][j+1] != -1 ) { e.to = s[i][j+1]; G[s[i][j]].push_back(e); }
      }
    }
  }

  warshall_floyd();

  int ans = 0;
  for ( int i = 0; i < V; i++ ) {
    for ( int j = 0; j < V; j++ ) {
      ans = max(d[i][j], ans);
    }
  }

  cout << ans << endl;
  return 0;
}
