#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 0;
  if ( a == b ) {
    ans = c;
  } else if ( b == c ) {
    ans = a;
  } else if ( c == a ) {
    ans = b;
  }
  cout << ans << endl;
  return 0;
}
