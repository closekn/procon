#include <bits/stdc++.h>
using namespace std;

bool all_char_same(string s) {
  if ( s.size() < 1 ) { return true; }
  for ( int i = 1; i < s.size(); i++ ) {
    if ( s[0] != s[i] ) { return false; }
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  string ans = ( all_char_same(s) ) ? "No" : "Yes";
  cout << ans << endl;
  return 0;
}
