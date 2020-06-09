#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, l;
  cin >> x >> y >> l;
  int ans = (abs(x)+l-1)/l + (abs(y)+l-1)/l + 2;
  if ( x == 0 && y >= 0 ) { ans -= 2; } else 
  if ( y >= 0 ) { ans--; }
  cout << ans << endl;
  return 0;
}