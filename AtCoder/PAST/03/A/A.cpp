#include <bits/stdc++.h>
using namespace std;

string upperCase(string s){
  for ( int i = 0; i < s.size(); i++ )
    s[i] = toupper(s[i]);
  return s;
}

int main() {
  string s, t;
  string ans = "different";
  cin >> s >> t;
  if ( s == t ) {
    ans = "same";
  } else if ( upperCase(s) == upperCase(t) ) {
    ans = "case-insensitive";
  }
  cout << ans << endl;
  return 0;
}
