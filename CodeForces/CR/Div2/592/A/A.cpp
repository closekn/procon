#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for ( int q = 0; q < t; q++ ) {
      int a, b, c, d, k;
      cin >> a >> b >> c >> d >> k;
      int x = ( a%c == 0 ) ?  (a/c) : (a/c)+1;
      int y = ( b%d == 0 ) ?  (b/d) : (b/d)+1;
      if ( x+y <= k ) {
        cout << x << ' ' << y << endl;
      } else {
        cout << -1 << endl;
      }
    }

  return 0;
}
