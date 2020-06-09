#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string ans = "";

  do {
    int now = abs(n%2);
    ans += to_string(now);
    n -= now;
    n /= -2;
  } while ( n != 0 );

  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}
