#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  string s[h];
  for ( int i = 0; i < h; i++ ) {
    cin >> s[i];
  }
  int dp[h][w] = {};

  int len;
  for ( int i = 0; i < h; i++ ) {
    len = 0;
    for ( int j = 0; j < w; j++ ) {
      if ( s[i][j] == '#' ) {
        for ( int k = 1; k <= len; k++ ) {
          dp[i][j-k] = len;
        }
        len = 0;
      } else if( j == w-1 ) {
        len++;
        for ( int k = 0; k <= len; k++ ) {
          dp[i][j-k] = len;
        }
      } else {
        len++;
      }
    }
  }
  for ( int j = 0; j < w; j++ ) {
    len = 0;
    for ( int i = 0; i < h; i++ ) {
      if ( s[i][j] == '#' ) {
        for ( int k = 1; k <= len; k++ ) {
          dp[i-k][j] += len;
        }
        len = 0;
      } else if ( i == h-1 ) {
        len++;
        for ( int k = 0; k <= len; k++ ) {
          dp[i-k][j] += len;
        }
      } else {
        len++;
      }
    }
  }

  int max = 0;
  for ( int i = 0; i < h; i++ ) {
    for ( int j = 0; j < w; j++ ) {
      max = ( dp[i][j] > max ) ? dp[i][j] : max;
    }
  }

  cout << max-1 << endl;
  return 0;
}