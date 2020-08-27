#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;
int tb[3][30];

int main() {
  int n, c;
  cin >> n >> c;
  int d[c][c];
  for ( int i = 0; i < c; i++ ) {
    for ( int j = 0; j < c; j++ ) {
      cin >> d[i][j];
    }
  }
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      int now_color;
      cin >> now_color; now_color--;
      tb[(i+j)%3][now_color]++;
    }
  }

  int ans = INF;
  for ( int i = 0; i < c; i++ ) {
    for ( int j = 0; j < c; j++ ) {
      for ( int k = 0; k < c; k++ ) {
        if ( i == j || j == k || k == i ) { continue; }
        int conf = 0;
        //-- switch (x+y)%3
        // case 0: 全部 color i にする
        for ( int l = 0; l < c; l++ ) { conf += tb[0][l] * d[l][i]; }
        // case 1: 全部 color j にする
        for ( int l = 0; l < c; l++ ) { conf += tb[1][l] * d[l][j]; }
        // case 2: 全部 color k にする
        for ( int l = 0; l < c; l++ ) { conf += tb[2][l] * d[l][k]; }
        ans = min(ans, conf);
      }
    }
  }

  cout << ans << endl;
  return 0;
}
