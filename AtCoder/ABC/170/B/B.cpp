#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  string ans = "Yes";

  if ( y%2 == 1 ) {
    ans = "No";
  } else {
    if ( 2*x > y ) {
      ans = "No";
    } else {
      while ( x-- > 0 ) {
        if ( y >= 4 ) {
          y -= 4;
        } else {
          y -= 2;
        }
      }
      if ( y > 0 ) { ans = "No"; }
    }
    
  }

  cout << ans << endl;
  return 0;
}
