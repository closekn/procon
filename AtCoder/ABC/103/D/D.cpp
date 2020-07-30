#include <bits/stdc++.h>
using namespace std;

struct war {
  int a;
  int b;
};
bool operator < (const war &l, const war &r) { return l.b < r.b; }

int main() {
  int n, m;
  cin >> n >> m;
  war w[m];
  for ( int i = 0; i < m; i++ ) {
    int a, b;
    cin >> a >> b;
    w[i] = {a, b};
  }
  sort(w, w+m);

  int ans = 0;
  int before_bridge = -1;
  for ( int i = 0; i < m; i++ ) {
    if ( w[i].a > before_bridge ) {
      ans++;
      before_bridge = w[i].b-1;
    }
  }

  cout << ans << endl;
  return 0;
}
