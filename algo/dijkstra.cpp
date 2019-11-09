#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define INF 1e+9
#define MAX_V 10

struct edge {
  int to;
  int cost;
};

// <最短距離, 頂点の番号>
using P = pair<int, int>;

int V;
vector<edge> G[MAX_V];
int d[MAX_V];

void dijkstra(int s) {
  priority_queue<P, vector<P>, greater<P> > que;
  fill(d, d+V, INF);
  d[s] = 0;
  que.push(P(0, s));

  while ( !que.empty() ) {
    P p = que.top();
    que.pop();
    int v = p.second;
    if (d[v] < p.first) continue;

    for ( int i = 0; i < G[v].size(); i++ ) {
      edge e = G[v][i];
      if ( d[e.to] > d[v] + e.cost ) {
        d[e.to] = d[v] + e.cost;
        que.push(P(d[e.to], e.to));
      }
    }
  }
}

int main() {
    cin >> V;
    int E;
    cin >> E;
    for ( int i = 0; i < E; i++ ) {
      int a, b, c;
      cin >> a >> b >> c;
      edge e = {b, c};
      G[a].push_back(e);
    }
    // 0始点の全頂点探索
    dijkstra(0);
    for ( int i = 0; i < V; i++ ) {
      if ( d[i] != INF )
        cout << "0から" << i << "までのコスト: " << d[i] << endl;
    }
}