#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool dp[n][n];
  for ( int i = 0; i < n; i++ ) {
    int x, y;
    cin >> x >> y;
    dp[x-1][y-1] = true;
  }
  

  return 0;
}