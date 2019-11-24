#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans = "AC";
  if ( s[0] != 'A' ) { ans = "WA"; }
  int C = -1;
  for ( int i = 2; i <= s.size()-2; i++ ) {
    if ( s[i] == 'C' ) {
      if ( C != -1 ) { C = -1; break; }
      C = i;
    }
  }
  if ( C == -1 ) { ans = "WA"; }

  for ( int i = 1; i < s.size(); i++ ) {
    if ( i == C ) { continue; }
    if ( isupper(s[i]) ) { ans = "WA"; break; }
  }

  cout << ans << endl;
  return 0;
}
