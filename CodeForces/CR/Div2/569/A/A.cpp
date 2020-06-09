#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 1;
  int zen = 4;
  for ( int i = 1; i < n; i++ ) {
    ans += zen;
    zen += 4;
  }
  cout << ans << endl;
  return 0;
}