#include <bits/stdc++.h>
using namespace std;

struct hand {
  int ib;
  int jb;
  int ia;
  int ja;
};

int main() {
  int h, w;
  cin >> h >> w;
  h++;
  w++;
  int g[h][w];
  for ( int i = 1; i < h; i++ ) {
    for ( int j = 1; j < w; j++ ) {
      cin >> g[i][j];
    }
  }

  vector<hand> me;
  for ( int i = 1; i < h; i++ ) {
    if ( i%2 == 1 ) {
      for ( int j = 1; j < w; j++ ) {
        if ( i == h-1 && j == w-1 ) { break; }
        if ( g[i][j]%2 == 1 ) {
          hand t;
          t.ib = i;
          t.jb = j;
          if ( j != w-1 ) {
            t.ia = i;
            t.ja = j+1;
          } else {
            t.ia = i+1;
            t.ja = j;
          }
          g[t.ia][t.ja]++;
          me.push_back(t);
        }
      }
    } else {
      for ( int j = w-1; j >= 1; j-- ) {
        if ( i == h-1 && j == 1 ) { break; }
        if ( g[i][j]%2 == 1 ) {
          hand t;
          t.ib = i;
          t.jb = j;
          if ( j != 1 ) {
            t.ia = i;
            t.ja = j-1;
          } else {
            t.ia = i+1;
            t.ja = j;
          }
          g[t.ia][t.ja]++;
          me.push_back(t);
        }
      }
    }
  }

  cout << me.size() << endl;
  for ( int i = 0; i < me.size(); i++ ) {
    cout << me[i].ib << ' ' << me[i].jb << ' ' << me[i].ia << ' ' << me[i].ja << endl;
  }
  return 0;
}
