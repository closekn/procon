#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  double sq_m = sqrt(m);
  int ans = 1;
  for ( int i = 1; i <= sq_m; i++ ) {
    if ( m%i != 0 ) { continue; }
    ans = ( i > ans && i <= m/n ) ? i : ans;
    ans = ( m/i > ans && m/i <= m/n ) ? m/i : ans;
  }

  cout << ans << endl;
  return 0;
}
