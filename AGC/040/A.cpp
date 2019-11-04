#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.length() + 1;
  int a[n];
  long long sum =0;
  int dp[n-1];
  dp[n-2] = ( s[n-2] == '<' ) ? 0 : 1;
  for ( int i = n-3; i >= 0; i-- ) {
    dp[i] = ( s[i] == '<' ) ? 0 : dp[i+1]+1;
  }

  a[0] = dp[0];
  for ( int i = 1; i < n-1; i++ ) {
    if ( s[i] == '<' ) {
      if ( s[i-1] == '<' ) {
        a[i] = a[i-1]+1;
      } else {
        a[i] = 0;
      }
    } else {
      if ( s[i-1] == '<' ) {
        a[i] = ( a[i-1]+1 > dp[i] ) ? a[i-1]+1 : dp[i];
      } else {
        a[i] = dp[i];
      }
    }
  }
  a[n-1] = ( s[n-2] == '>' ) ? 0 : a[n-2]+1;

  for ( int i = 0; i < n; i++ ) {
    sum += a[i];
  }


  cout << sum << endl;
  return 0;
}
