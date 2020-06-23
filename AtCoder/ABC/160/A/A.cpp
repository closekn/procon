#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans = ( s[2] == s[3] && s[4] == s[5] ) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
