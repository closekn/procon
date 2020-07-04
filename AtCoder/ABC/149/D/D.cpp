#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  int r, s, p;
  string t;
  cin >> n >> k;
  cin >> r >> s >> p;
  cin >> t;

  int ans = 0;
  for ( int i = 0; i < n; i++ ) {
    if ( i >= k && t[i] == t[i-k] ) { t[i] = '.'; }
    if ( t[i] == 'r' ) { ans += p; }
    if ( t[i] == 's' ) { ans += r; }
    if ( t[i] == 'p' ) { ans += s; }
  }

  cout << ans << endl;
  return 0;
}
