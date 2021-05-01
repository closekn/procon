#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int p[n][5];
  for ( int i = 0; i < n; i++ ) {
    for ( int k = 0; k < 5; k++ ) {
      cin >> p[i][k];
    }
  }

  int h[5];
  for ( int k = 0; k < 5; k++ ) {
    h[k] = 0;
    for ( int i = 1; i < n; i++ ) {
      if ( p[i][k] > p[h[k]][k] ) {
        h[k] = i;
      }
    }
  }

  int ans = 0;
  for ( int i = 0; i < n-1; i++ ) {
    for ( int j = i+1; j < n; j++ ) {
      int mx[5];
      for ( int k = 0; k < 5; k++ ) {
        for ( int l = 0; l < 5; l++ ) {
          mx[l] = max(p[i][l], p[j][l]);
          mx[l] = max(mx[l], p[h[k]][l]);
        }
        int mn = 1e9+7;
        for ( int l = 0; l < 5; l++ ) {
          mn = min(mn, mx[l]);
        }
        ans = max(ans, mn);
      }
    }
  }
  
  cout << ans << endl;
  return 0;
}
