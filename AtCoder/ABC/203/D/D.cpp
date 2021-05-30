#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[n][n];
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      cin >> a[i][j];
    }
  }

  int dp[n+1][n+1];
  for ( int i = 0; i <= n; i++ ) {
    dp[i][0] = 0;
    dp[0][i] = 0;
  }

  int ng = -1;
  int ok = 1e9+7;
  int lim = k*k/2 + 1;

  while ( ok - ng > 1 ) {
    int mid = (ng + ok) / 2;
    for ( int i = 0; i < n; i++ ) {
      for ( int j = 0; j < n; j++ ) {
        dp[i+1][j+1] = dp[i+1][j] + dp[i][j+1] - dp[i][j];
        if ( a[i][j] > mid ) {
          dp[i+1][j+1]++;
        }
      }
    }

    bool flag = false;
    for ( int i = 0; i < n-k+1; i++ ) {
      for ( int j = 0; j < n-k+1; j++ ) {
        if ( (dp[i+k][j+k] - dp[i][j+k] - dp[i+k][j] + dp[i][j]) < lim ) {
          flag = true;
        }
      }
    }

    if ( flag ) {
      ok = mid;
    } else {
      ng = mid;
    }
  }

  cout << ok << endl;
  return 0;
}