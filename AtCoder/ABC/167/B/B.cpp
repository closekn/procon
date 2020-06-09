#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int ans = ( k > a ) ? a : k;
  k -= (a+b);
  ans -= ( k > 0 ) ? k : 0;
  cout << ans << endl;
  return 0;
}
