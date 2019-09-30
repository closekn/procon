#include <bits/stdc++.h>
using namespace std;

int main() {
  int y, m, d;
  scanf("%d/%d/%d", &y, &m, &d);
  
  if ( y > 2019 ) { cout << "TBD" << endl; } else
  if ( y < 2019 ) { cout << "Heisei" << endl; } else
  if ( m > 4 ) { cout << "TBD" << endl; } else
  { cout << "Heisei" << endl; }
  return 0;
}
