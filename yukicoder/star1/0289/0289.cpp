#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  for ( int i = 0; i < s.length(); i++ ) {
    int t = s[i] - '0';
    ans += ( 0 <= t && t <= 9 ) ? t : 0;
  }
  cout << ans << endl;
  return 0;
}