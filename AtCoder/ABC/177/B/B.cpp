#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  int ans = 1000;
  for ( int k = 0; k <= s.size()-t.size(); k++ ) {
    int ch = 0;
    for ( int i = 0; i < t.size(); i++ ) {
      if ( t[i] != s[k+i] ) { ch++; }
    }
    ans = min(ans, ch);
  }

  cout << ans << endl;
  return 0;
}
