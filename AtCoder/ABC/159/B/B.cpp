#include <bits/stdc++.h>
using namespace std;

bool is_kaibun(string s) {
  for ( int i = 0; i < s.size(); i++ ) {
    if ( s[i] != s[s.size()-i-1] ) { return false; }
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  int n = s.size();
  string ans = (
    is_kaibun(s) &&
    is_kaibun(s.substr(0, (n-1)/2)) &&
    is_kaibun(s.substr((n+3)/2-1, (n-1)/2))
  ) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
