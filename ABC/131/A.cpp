#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans = "Good";
  if ( s[0] == s[1] || s[1] == s[2] || s[2] == s[3] ) { ans = "Bad"; }
  cout << ans << endl;
  return 0;
}