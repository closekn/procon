#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  vector<int> dp(n+1, 0);
  for ( int i = 0; i < m; i++ ) {
    int a;
    cin >> a;
    dp[a] = 1;
  }

  for ( int i = 1; i <= n; i++ ) {
    dp[i] += dp[i-1];
  }

  cout << min(dp[x], dp[n]-dp[x]) << endl;
  return 0;
}
