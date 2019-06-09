#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b;

  if ( a <= 5 ) { c = 0; }
  if ( 6<= a && a <= 12 ) { c = b/2; }
  if ( 13 <= a ) { c = b; }

  cout << c << endl;
  return 0;
}