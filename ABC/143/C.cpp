#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;

  int ans = 1;
  for ( int i = 1; i < n; i++ ) {
    ans += ( s[i] != s[i-1] ) ? 1 : 0;
  }
  cout << ans << endl;
  return 0;
}
