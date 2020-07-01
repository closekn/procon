#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

int main() {
  int h, n;
  cin >> h >> n;
  int a[n], b[n];
  int mx = 0;
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i] >> b[i];
    mx = max(mx, a[i]);
  }

  vector<int> dp(h+mx+1, INF);
  dp[0] = 0;
  for ( int i = 0; i < h+mx; i++ ) {
    for ( int k = 0; k < n; k++ ) {
      int tmp = dp[i] + b[k];
      int pos = i + a[k];
      if ( pos <= h+mx ) {
        dp[pos] = min(tmp, dp[pos]);
      }
    }
  }

  int ans = INF;
  for ( int i = h; i <= h+mx; i++ ) {
    ans = min(dp[i], ans);
  }
  cout << ans << endl;
  return 0;
}
