#include <bits/stdc++.h>
using namespace std;

struct dish {
  int time;
  int taste;
};
bool operator < (const dish &l, const dish &r) { return l.time < r.time; }

int main() {
  int n, t;
  cin >> n >> t;
  dish menu[n+1];

  for ( int i = 1; i <= n; i++ ) {
    int time, taste;
    cin >> time >> taste;
    menu[i] = {time, taste};
  }
  sort(menu+1, menu + n+1);

  vector<vector<int>> dp(n+1, vector<int>(t, 0));
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 0; j < t; j++ ) {
      dp[i][j] = max(dp[i][j], dp[i-1][j]);
      if ( j + menu[i].time < t ) {
        dp[i][j + menu[i].time] = max(dp[i-1][j + menu[i].time], dp[i-1][j] + menu[i].taste);
      }
    }
  }

  int ans = 0;
  for ( int i = 1; i <= n; i++ ) {
    ans = max(ans, dp[i-1][t-1] + menu[i].taste);
  }
  cout << ans << endl;
  return 0;
}
