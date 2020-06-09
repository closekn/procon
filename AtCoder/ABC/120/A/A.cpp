#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 0;
  while ( b >= a ) {
    ans++;
    b -= a;
    if ( ans == c ) { break; }
  }

  cout << ans << endl;
  return 0;
}
