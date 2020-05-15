#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, X, Y;
  cin >> n >> m >> X >> Y;
  int x[n], y[m];
  for ( int i = 0; i < n; i++ ) { cin >> x[i]; }
  for ( int i = 0; i < m; i++ ) { cin >> y[i]; }
  sort(x, x+n);
  sort(y, y+m);
  int mn, mx;
  mn = x[n-1] + 1;
  mx = y[0];
  string ans = "War";
  for ( int i = mn; i <= mx; i++ ) {
    if ( X < i && i <= Y ) { ans = "No War"; break; }
  }
  cout << ans << endl;
  return 0;
}
