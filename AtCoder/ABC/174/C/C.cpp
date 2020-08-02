#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;

  int ans = 0;
  int now = 7;
  while ( ans++ < 1e7 ) {
    if ( now%k == 0 ) {
      cout << ans << endl;
      return 0;
    }
    now *= 10;
    now += 7;
    now %= k;
  }

  cout << -1 << endl;
  return 0;
}
