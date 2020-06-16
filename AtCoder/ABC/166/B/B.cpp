#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<bool> ch(n+1, false);
  int d;
  for ( int i = 0; i < k; i++ ) {
    cin >> d;
    for ( int j = 0; j < d; j++ ) {
      int snk;
      cin >> snk;
      ch[snk] = true;
    }
  }

  int ans = 0;
  for ( int i = 1; i <= n; i++ ) {
    if ( ! ch[i] ) { ans++; }
  }
  cout << ans << endl;
  return 0;
}
