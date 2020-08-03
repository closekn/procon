#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;

  int need_right = 0, need_left = 0;
  for ( int i = 0; i < n; i++ ) {
    if ( s[i] == '(' ) {
      need_right++;
    }
    if ( s[i] == ')' ) {
      if ( need_right > 0 ) {
        need_right--;
      } else {
        need_left++;
      }
    }
  }

  string ans = "";
  while ( need_left-- > 0 ) { ans += "("; }
  ans += s;
  while ( need_right-- > 0 ) { ans += ")"; }
  cout << ans << endl;
  return 0;
}
