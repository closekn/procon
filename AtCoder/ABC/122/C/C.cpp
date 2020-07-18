#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  string s;
  cin >> n >> q;
  cin >> s;

  int dp[n];
  dp[0] = 0;
  for ( int i = 1; i < n; i++ ) {
    dp[i] = dp[i-1];
    dp[i] += ( s[i-1] == 'A' && s[i] == 'C' ) ? 1 : 0;
  }

  while ( q-- > 0 ) {
    int l, r;
    cin >> l >> r;
    cout << dp[r-1] - dp[l-1] << endl;
  }
  return 0;
}
