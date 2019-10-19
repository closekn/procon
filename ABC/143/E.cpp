#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll INF = 1e+18;
#define MAX_V 300

struct edge {
  ll to;
  ll cost;
};

ll V;
ll E;
ll L;
vector<edge> G[MAX_V];
ll d[MAX_V][MAX_V];
ll c[MAX_V][MAX_V];

void warshall_floyd_dis() {

  for ( ll i = 0; i < V; i++ ) {
    fill(d[i], d[i]+V, INF);
    d[i][i] = 0;
    for ( ll j = 0; j < G[i].size(); j++ ) {
      edge e = G[i][j];
      d[i][e.to] = e.cost;
    }
  }

  for ( ll k = 0; k < V; k++ ){
    for ( ll i = 0; i < V; i++ ) {
      for ( ll j = 0; j < V; j++ ) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}

void warshall_floyd_ct() {

  for ( ll i = 0; i < V; i++ ) {
    fill(c[i], c[i]+V, INF);
    c[i][i] = 0;
    for ( ll j = 0; j < V; j++ ) {
      if ( d[i][j] <= L && d[i][j] > 0 ) {
        c[i][j] = 1;
      }
    }
  }

  for ( ll k = 0; k < V; k++ ){
    for ( ll i = 0; i < V; i++ ) {
      for ( ll j = 0; j < V; j++ ) {
        c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
      }
    }
  }
}

int main() {

  cin >> V >> E >> L;
  for ( ll i = 0; i < E; i++ ) {
    ll a, b, c;
    cin >> a >> b >> c;
    if ( c > L ) {
      continue;
    }
    a--; b--;
    edge ea = {b, c};
    edge eb = {a, c};
    G[a].push_back(ea);
    G[b].push_back(eb);
  }


  warshall_floyd_dis();
  warshall_floyd_ct();

  ll q;
  cin >> q;

  while ( q-- > 0 ) {
    ll s, t;
    cin >> s >> t;
    s--; t--;
    ll ans = ( d[s][t] != INF && d[s][t] != 0 ) ? c[s][t]-1 : -1;
    cout << ans << endl;
  }

  return 0;
}
