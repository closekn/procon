#include <bits/stdc++.h>
using namespace std;

const int MAX_Y = 10004;
const long long INF = 1e12;

int main() {
  int n;
  cin >> n;
  int y[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> y[i];
  }
  if ( n == 1 ) { cout << 0 << endl; return 0; }
  long long dp[n+1][MAX_Y];
  for ( int i = 0; i < n+1; i++ ) {
    for ( int j = 0; j < MAX_Y; j++ ) {
      dp[i][j] = INF;
    }
  }
  dp[0][0] = 0;

  for ( int i = 0; i < n; i++ ) {
    long long mn = INF;
    for ( int j = 0; j < MAX_Y; j++ ) {
      mn = min(mn, dp[i][j]);
      if ( y[i] > j ) {
        dp[i+1][j] = mn + (y[i]-j);
      } else {
        dp[i+1][j] = mn + (j-y[i]);
      }
    }
  }
  
  long long ans = INF;
  for ( int j = 0; j < MAX_Y; j++ ) {
    ans = min(ans, dp[n][j]);
  }
  cout << ans << endl;
  return 0;
}
