#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s;
  cin >> t;

  string ans = "No";
  for ( int i = 0; i < s.size(); i++ ) {
    if ( s == t ) { ans = "Yes"; break; }
    char c = s[0];
    s = s.substr(1, s.size()-1) + c;
  }

  cout << ans << endl;
  return 0;
}
