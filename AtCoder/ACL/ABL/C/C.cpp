#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  int n, m;
  cin >> n >> m;
  dsu d(n);

  while ( m-- > 0 ) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    d.merge(a, b);
  }

  vector<bool> b(n, true);
  int ans = -1;
  for ( int i = 0; i < n; i++ ) {
    if ( b[d.leader(i)] ) {
      b[d.leader(i)] = false;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
