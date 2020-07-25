#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

int main() {
  int h, w, k;
  cin >> h >> w >> k;

  vector<vector<long long>> dp(h+1, vector<long long>(w, 0));
  dp[0][0] = 1;
  for ( int i = 0; i < h; i++ ) {
    for ( int j = 0; j < w; j++ ) {
      for ( int bit = 0; bit < (1<<(w-1)); bit++ ) {
        bool not_connect = true;
        for ( int line = 0; line < w-2; line++ ) {
          if ( (bit>>line)&1 && (bit>>(line+1))&1 ) {
            not_connect = false;
            break;
          }
        }
        if ( !not_connect ) { continue; }

        if ( j >= 1 && (bit>>(j-1))&1 ) {
          dp[i+1][j-1] += dp[i][j];
          dp[i+1][j-1] %= mod;
        } else if ( j <= w-2 && (bit>>j)&1 ) {
          dp[i+1][j+1] += dp[i][j];
          dp[i+1][j+1] %= mod;
        } else {
          dp[i+1][j] += dp[i][j];
          dp[i+1][j] %= mod;
        }
      }
    }
  }

  cout << dp[h][k-1] << endl;
  return 0;
}
