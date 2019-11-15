#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string ans = "No";
  for ( int c = 0; c*4 <= n; c++ ) {
    for ( int d = 0; d*7 + c*4 <= n; d++ ) {
      if ( d*7 + c*4 == n ) { ans = "Yes"; }
    }
  }

  cout << ans << endl;
  return 0;
}
