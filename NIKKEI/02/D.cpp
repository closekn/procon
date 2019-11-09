#include <bits/stdc++.h>
using namespace std;

struct lrc {
  int l;
  int r;
  int c;
};
bool cmp_lrc(const lrc &a, const lrc &b) { return a.c < b.c; }

#define INF 1e14
#define MAX_V 10

struct edge {
  int to;
  long long cost;
};

using P = pair<int, int>;

int V;
vector<edge> G[MAX_V];
long long d[MAX_V];

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
  int m;
  cin >> V >> m;
  lrc nei[m];
  for ( int i = 0; i < m; i++ ) {
    cin >> nei[i].l >> nei[i].r >> nei[i].c;
    nei[i].l--;
    nei[i].r--;
  }
  sort(nei, nei+m, cmp_lrc);
  int ch[V];
  for ( int i = 0; i < V; i++ ) { ch[i] = i; }
  for ( int i = 0; i < m; i++ ) {
    for ( int j = nei[i].l; j < nei[i].r; j++ ) {
      if ( nei[i].r <= ch[j] ) { continue; }
      for ( int k = ch[j]+1; k <= nei[i].r; k++ ) {
        edge e = {k, nei[i].c};
        G[j].push_back(e);
        e = {j, nei[i].c};
        G[k].push_back(e);
      }
      ch[j] = nei[i].r;
    }
  }

  dijkstra(0);
  long long ans = ( d[V-1] != INF ) ? d[V-1] : -1;
  cout << ans << endl;
  return 0;
}
