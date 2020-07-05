#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  char c[h][w];
  for ( int i = 0; i < h; i++ ) {
    for ( int j = 0; j < w; j++ ) {
      cin >> c[i][j];
    }
  }

  int ans = 0;
  for ( int bit_h = 0; bit_h < (1<<h); bit_h++ ) {
    for ( int bit_w = 0; bit_w < (1<<w); bit_w++ ) {
      int b = 0;
      for ( int i = 0; i < h; i++ ) {
        for ( int j = 0; j < w; j++ ) {
          if ( bit_h & (1<<i) && bit_w & (1<<j) ) {
            if ( c[i][j] == '#' ) { b++; }
          }
        }
      }
      if ( b == k ) { ans++; }
    }
  }

  cout << ans << endl;
  return 0;
}
