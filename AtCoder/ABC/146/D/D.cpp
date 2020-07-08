#include <bits/stdc++.h>
using namespace std;

struct edge {
  int id;
  int to;
};

int main() {
  int n;
  cin >> n;
  vector<edge> tree[n+1];
  vector<int> color(n, 0);

  for ( int i = 1; i < n; i++ ) {
    int a, b;
    cin >> a >> b;
    tree[a].push_back({i, b});
    tree[b].push_back({i, a});
  }

  queue<int> que;
  que.push(1);
  int k = 0;
  while ( !que.empty() ) {
    int v = que.front();
    que.pop();
    k = ( tree[v].size() > k ) ? tree[v].size() : k;

    int used_color;
    for ( int i = 0; i < tree[v].size(); i++ ) {
      if ( color[tree[v][i].id] != 0 ) {
        used_color = color[tree[v][i].id];
      }
    }

    int now_color = 1;
    for ( int i = 0; i < tree[v].size(); i++ ) {
      if ( color[tree[v][i].id] != 0 ) { continue; }
      if ( now_color == used_color ) { now_color++; }
      color[tree[v][i].id] = now_color++;
      que.push(tree[v][i].to);
    }
  }

  cout << k << endl;
  for ( int i = 1; i < n; i++ ) {
    cout << color[i] << endl;
  }
  return 0;
}
