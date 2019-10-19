#include <bits/stdc++.h>

int INF = 1e+9;
#define MAX_V 300

struct edge {
  int to;
  int cost;
};

int V;
vector<edge> G[MAX_V];
int d[MAX_V][MAX_V];


void warshall_floyd() {

  // 初期経路
  for ( int i = 0; i < V; i++ ) {
    fill(d, d+V, INF);
    d[i][i] = 0;
    for ( int j = 0; j < G[i].size(); j++ ) {
      edge e = G[i][j];
      d[i][e.to] = e.cost;
    }
  }

  // 経路探索
  for ( int k = 0; k < V; k++ ){       // 経由する頂点
    for ( int i = 0; i < V; i++ ) {    // 始点
      for ( int j = 0; j < V; j++ ) {  // 終点
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}