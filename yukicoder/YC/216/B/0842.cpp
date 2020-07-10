#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, e, f, g;
  cin >> a >> b >> c >> d >> e >> f >> g;
  while ( g >= 500 && a > 0 ) { g -= 500; a--; }
  while ( g >= 100 && b > 0 ) { g -= 100; b--; }
  while ( g >= 50  && c > 0 ) { g -= 50;  c--; }
  while ( g >= 10  && d > 0 ) { g -= 10;  d--; }
  while ( g >= 5   && e > 0 ) { g -= 5;   e--; }
  while ( g >= 1   && f > 0 ) { g -= 1;   f--; }
  string ans = ( g == 0 ) ? "YES" : "NO";
  cout << ans << endl;
  return 0;
}