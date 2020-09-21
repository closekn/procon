#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string ans = "No";
  int len = 0;
  for ( int i = 0; i < n; i++ ) {
    int x, y;
    cin >> x >> y;
    if ( x == y ) { len++; } else { len = 0; }
    if ( len == 3 ) { ans = "Yes"; }
  }

  cout << ans << endl;
  return 0;
}
