#include <bits/stdc++.h>
using namespace std;

int get_w_col(vector<string> g) {
  int w = g[0].length();
  int rt = -1;

  for ( int j = 0; j < w; j++ ) {
    bool f = true;
    for ( int i = 0; i < g.size(); i++ ) {
      if ( g[i][j] == '#' ) { f = false; break; }
    }
    if ( f ) { rt = j; break; }
  }

  return rt;
}

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> g;
  
  for ( int i = 0; i < h; i++ ) {
    string t;
    cin >> t;
    bool f = false;
    for ( int j = 0; j < w; j++ ) {
      if ( t[j] == '#' ) { f = true; break; }
    }
    if ( f ) { g.push_back(t); }
  }

  int p = get_w_col(g);
  while ( p != -1 ) {
    for ( int i = 0; i < g.size(); i++ ) {
      g[i].erase(p, 1);
    }
    p = get_w_col(g);
  }

  for ( int i = 0; i < g.size(); i++ ) {
    cout << g[i] << endl;
  }
  return 0;
}
