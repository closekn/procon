#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

int main() {
  string s;
  cin >> s;

  vector<vector<long long>> dp(100005, vector<long long>(13, 0));
  dp[0][0] = 1;
  for ( int i = 0; i < s.size(); i++ ) {
    int c = ( s[i] != '?' ) ? s[i]-'0' : -1;

    for ( int j = 0; j < 10; j++ ) {
      if ( c != -1 && c != j ) { continue; }
      for ( int k = 0; k < 13; k++ ) {
        dp[i+1][(k*10+j)%13] += dp[i][k];
      }
    }
    for ( int j = 0; j < 13; j++ ) { dp[i+1][j] %= mod; }
  }

  cout << dp[s.size()][5] << endl;
  return 0;
}
