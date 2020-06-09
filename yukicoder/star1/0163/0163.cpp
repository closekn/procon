#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  for ( int i = 0; i < s.length(); i++ ) {
    if ( 'A' <= s[i] && s[i] <= 'Z' ) {
      s[i] = s[i] + 0x20;
    } else {
      s[i] = s[i] - 0x20;
    }
  }
  cout << s << endl;
  return 0;
}