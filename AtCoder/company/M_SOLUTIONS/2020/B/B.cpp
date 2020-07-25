#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  int k;
  cin >> a >> b >> c;
  cin >> k;

  while ( k-- > 0 ) {
    if ( a >= b ) {
      b *= 2;
    } else {
      c *= 2;
    }
  }

  string ans = (a < b && b < c) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
