#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  int c[n], a[n][m];
  int ans = -1;
  for ( int i = 0; i < n; i++ ) {
    cin >> c[i];
    for ( int j = 0; j < m; j++ ) {
      cin >> a[i][j];
    }
  }

  for (int bit = 0; bit < (1<<n); ++bit) {
    int now_cost = 0;
    int now_und[m];
    for ( int j = 0; j < m; j++ ) { now_und[j] = 0; }

    for ( int i = 0; i < n; i++ ) {
      if (bit & (1 << i)) {
        now_cost += c[i];
        for ( int j = 0; j < m; j++ ) {
          now_und[j] += a[i][j];
        }
      }
    }
    
    if ( ans != -1 && now_cost >= ans ) { continue; }
    bool cong = true;
    for ( int j = 0; j < m; j++ ) {
      if ( now_und[j] < x ) { cong = false; break; }
    }
    if ( cong ) { ans = now_cost; }
  }

  cout << ans << endl;
  return 0;
}
