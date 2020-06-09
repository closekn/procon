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

using P = pair<int, int>; // <最短距離, 頂点の番号>

int V;                  // ノード数
vector<edge> G[MAX_V];  // グラフ
int d[MAX_V];           // sから各頂点までの距離

/**
 * @fn ダイクストラ
 * @bref 上記変数'd'に各始点から各終点までの距離格納
 * @param (s) 始点ノード
 */
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
