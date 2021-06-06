#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int t[n];
  int sumt = 0;
  for ( int i = 0; i < n; i++ ) {
    cin >> t[i];
    sumt += t[i];
  }
  int lim = sumt/2;

  bool dp[n+1][lim+1];
  for ( int i = 0; i <= n; i++ ) {
    for ( int j = 0; j <= lim; j++ ) {
      dp[i][j] = false;
    }
  }
  dp[0][0] = true;
  for ( int i = 0; i < n; i++ ) {
    for ( int sm = 0; sm <= lim; sm++ ) {
      if ( !dp[i][sm] ) { continue; }
      dp[i+1][sm] = true;
      if ( sm + t[i] <= lim ) { dp[i+1][sm + t[i]] = true; }
    }
  }

  int ans = 0;
  if ( n == 1 ) {
    ans = t[0];
  } else {
    for ( int i = lim; i >= 0; i-- ) {
      if ( !dp[n][i] ) { continue; }
      ans = sumt - i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
