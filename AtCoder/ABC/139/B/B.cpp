#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int plg = 1;
  int ans = 0;
  while ( b > plg ) {
    plg += a-1;
    ans++;
  }

  cout << ans << endl;
  return 0;
}
