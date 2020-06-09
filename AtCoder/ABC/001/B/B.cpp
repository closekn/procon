#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, vv;
  cin >> m;

  if ( m < 100    ) { vv = 0; } else
  if ( m <= 5000  ) { vv = m/100; } else
  if ( m <= 30000 ) { vv = m/1000 + 50; } else
  if ( m <= 70000 ) { vv = (m/1000 - 30)/5 + 80; } else
  if ( 70000 < m  ) { vv = 89; }

  printf("%02d\n", vv);
  return 0;
}