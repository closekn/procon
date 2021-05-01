#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int ans = 0;
  for ( int i = 3; i < s.size(); i++ ) {
    if ( s[i-3] == 'Z' && s[i-2] == 'O' && s[i-1] == 'N' && s[i] == 'e' ) { ans++; }
  }

  cout << ans << endl;
  return 0;
}
