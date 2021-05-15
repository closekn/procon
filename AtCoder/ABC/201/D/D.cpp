#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  string a[h];
  for ( int i = 0; i < h; i++ ) {
    cin >> a[i];
  }
  int map[h][w];
  for ( int i = 0; i < h; i++ ) {
    for ( int j = 0; j < w; j++ ) {
      int p = ( a[i][j] == '+' ) ? 1 : -1;
      if ( i%2 == j%2 ) { p *= -1; }
      map[i][j] = p;
    }
  }

  int dp[h][w];
  for ( int i = 0; i < h; i++ ) {
    for ( int j = 0; j < w; j++ ) {
      dp[i][j] = 0;
    }
  }
  map[0][0] = 0;
  dp[h-1][w-1] = map[h-1][w-1];
  for ( int i = h-2; i >= 0; i-- ) { dp[i][w-1] = dp[i+1][w-1] + map[i][w-1]; }
  for ( int j = w-2; j >= 0; j-- ) { dp[h-1][j] = dp[h-1][j+1] + map[h-1][j]; }

  for ( int i = h-2; i >= 0; i-- ) {
    for ( int j = w-2; j >= 0; j-- ) {
      if ( i%2 == j%2 ) {
        dp[i][j] = max(dp[i+1][j], dp[i][j+1]) + map[i][j];
      } else {
        dp[i][j] = min(dp[i+1][j], dp[i][j+1]) + map[i][j];
      }
    }
  }

  string ans;
  if ( dp[0][0] > 0 ) {
    ans = "Takahashi";
  } else if ( dp[0][0] < 0 ) {
    ans = "Aoki";
  } else {
    ans = "Draw";
  }
  cout << ans << endl;
  return 0;
}
