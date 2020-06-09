#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, m, n;
  cin >> l;
  cin >> m;
  cin >> n;
  while ( n >= 25 ) { n -= 25; m++; }
  while ( m >= 4 )  { m -= 4;  l++; }
  cout << (l%10) + m + n << endl;
  return 0;
}