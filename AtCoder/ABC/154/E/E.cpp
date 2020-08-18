#include <bits/stdc++.h>
using namespace std;

int dp0[105][4];
int dp1[105][4];

int main() {
  string n;
  int k;
  cin >> n;
  cin >> k;
  int l = n.size();

  dp0[0][0] = 0;
  dp1[0][0] = 1;

  for ( int i = 0; i < l; i++ ) {
    int now_d = n[i]-'0';
    // 0
    for ( int j = 0; j <= k; j++ ) {
      if ( now_d != 0 ) {
        dp0[i+1][j] = dp0[i][j] + dp1[i][j];
        dp1[i+1][j] = 0;
      } else {
        dp0[i+1][j] = dp0[i][j];
        dp1[i+1][j] = dp1[i][j];
      }
    }
    // 1-9
    for ( int j = 0; j < k; j++ ) {
      for ( int d = 1; d < 10; d++ ) {
        if ( now_d > d ) {
          dp0[i+1][j+1] += dp1[i][j];
        }
        if ( now_d == d ) {
          dp1[i+1][j+1] += dp1[i][j];
        }
        dp0[i+1][j+1] += dp0[i][j];
      }
    }
  }

  cout << dp0[l][k] + dp1[l][k] << endl;
  return 0;
}
