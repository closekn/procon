#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  long long k;
  cin >> s;
  cin >> k;

  long long now = 0;
  char ans;
  for ( int i = 0; i < s.size(); i++ ) {
    if ( s[i] != '1' ) { ans = s[i]; break; }
    if ( ++now == k ) { ans = s[i]; break; }
  }

  cout << ans << endl;
  return 0;
}
