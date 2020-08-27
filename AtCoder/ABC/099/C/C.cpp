#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

int main() {
  int n;
  cin >> n;

  int ans = INF;
  for ( int i = 0; i <= n; i++ ) {
    int ct = 0;
    // 6
    int use6 = i;
    while ( use6 > 0 ) { ct += use6%6; use6 /= 6; }
    // 9
    int use9 = n-i;
    while ( use9 > 0 ) { ct += use9%9; use9 /= 9; }
    ans = min(ans, ct);
  }

  cout << ans << endl;
  return 0;
}
