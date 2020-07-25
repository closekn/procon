#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  int ans = 8;
  if ( x >= 600 ) { ans--; }
  if ( x >= 800 ) { ans--; }
  if ( x >= 1000 ) { ans--; }
  if ( x >= 1200 ) { ans--; }
  if ( x >= 1400 ) { ans--; }
  if ( x >= 1600 ) { ans--; }
  if ( x >= 1800 ) { ans--; }
  cout << ans << endl;
  return 0;
}
