#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  int z;
  if ( x == y ) { z = x; }
  else if ( x != 0 && y != 0 ) { z = 0; }
  else if ( x != 1 && y != 1 ) { z = 1; }
  else { z = 2; }

  cout << z << endl;
  return 0;
}
