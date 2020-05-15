#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[m+1], dp[n+1];
  for ( int i = 0; i < m; i++ ) {
    cin >> a[i];
    dp[a[i]] = 0;
  }
  a[m] = 100001;

  int ch = 0;
  dp[0] = 1;
  if ( a[0] == 1 ) {
    dp[1] = 0; ch++;
  } else {
    dp[1] = 1;
  }
  for ( int i = 2; i <= n; i++ ) {
    if ( a[ch] == i ) { ch++; continue; }
    dp[i] = dp[i-1] + dp[i-2];
    dp[i] %= 1000000007;
  }

  cout << dp[n] << endl;
  return 0;
}