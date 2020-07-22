#include <bits/stdc++.h>
using namespace std;

const int dig = 40;

int main() {
  int n;
  long long k;
  cin >> n >> k;
  long long a[n];
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }

  long long dp[dig+1][2];
  for ( int i = 0; i < dig+1; i++ ) {
    for ( int j = 0; j < 2; j++ ) {  
      dp[i][j] = -1;
    }
  }
  dp[0][0] = 0;

  for ( int d = 0; d < dig; d++ ) {
    long long mask = 1ll << (dig-1 - d);
    
    int ct1 = 0;
    for ( int i = 0; i < n; i++ ) {
      if ( a[i] & mask ) { ct1++; }
    }

    long long select0 = mask * ct1;
    long long select1 = mask * (n-ct1);

    if ( dp[d][1] != -1 ) {
      dp[d+1][1] = max(dp[d+1][1], dp[d][1]+max(select0, select1));
    }
    if ( dp[d][0] != -1 && (k & mask) ) {
      dp[d+1][1] = max(dp[d+1][1], dp[d][0] + select0);
    }
    if ( dp[d][0] != -1 ) {
      if ( k & mask ) {
        dp[d+1][0] = max(dp[d+1][0], dp[d][0]+select1);
      } else {
        dp[d+1][0] = max(dp[d+1][0], dp[d][0]+select0);
      }
    }
  }

  cout << max(dp[dig][0], dp[dig][1]) << endl;
  return 0;
}
