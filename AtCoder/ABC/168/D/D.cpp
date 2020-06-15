#include <bits/stdc++.h>
using namespace std;

#define INF 1e+9
#define MAX_V 400001

struct edge {
  int to;
  int cost;
};

using P = pair<int, int>;

int V;
vector<edge> G[MAX_V];
int d[MAX_V];
int frm[MAX_V];

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
        frm[e.to] = v;
        que.push(P(d[e.to], e.to));
      }
    }
  }
}

int main() {
  int m;
  cin >> V >> m;
  for ( int i = 0; i < m; i++ ) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    edge ea, eb;
    ea.to = b; ea.cost = 1;
    eb.to = a; eb.cost = 1;
    G[a].push_back(ea);
    G[b].push_back(eb);
  }

  dijkstra(0);

  cout << "Yes" << endl;
  for ( int i = 1; i < V; i++ ) {
    cout << frm[i]+1 << endl;
  }
  return 0;
}
