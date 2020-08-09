#include <bits/stdc++.h>
using namespace std;

#define INF 1e+9
#define MAX_V 300005

struct edge {
  int to;
  int cost;
};

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
    if (d[v] < p.first) { continue; }

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
  int n, m;
  cin >> n >> m;
  V = n*3;
  for ( int i = 0; i < m; i++ ) {
    int u, v;
    cin >> u >> v;
    u--; u *= 3;
    v--; v *= 3;
    G[u].push_back({v+1, 1});
    G[u+1].push_back({v+2, 1});
    G[u+2].push_back({v, 1});
  }

  int start, goal;
  cin >> start >> goal;
  start--; start *= 3;
  goal--;  goal *= 3;

  dijkstra(start);
  
  int ans = ( d[goal] != INF ) ? d[goal]/3 : -1;
  cout << ans << endl;
  return 0;
}
