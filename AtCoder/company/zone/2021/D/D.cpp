#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool rev = false;
  string ans = "";
  string ansR = "";
  for ( int i = 0; i < s.size(); i++ ) {
    if ( s[i] == 'R' ) { rev = !rev; continue; }
    if ( !rev ) {
      if ( ans[ans.size()-1] != s[i] ) {
        ans += s[i];
      } else {
        ans.pop_back();
      }
    } else {
      if ( ansR[ansR.size()-1] != s[i] ) {
        ansR += s[i];
      } else {
        ansR.pop_back();
      }
    }
  }

  int d;
  for ( d = 0; d < ans.size() && d < ansR.size(); d++ ) {
    if ( ans[d] == ansR[d] ) { continue; }
    break;
  }
  if ( d != 0 ) {
    ans = ans.substr(d);
    ansR = ansR.substr(d);
  }

  if ( rev ) {
    reverse(ans.begin(), ans.end());
    cout << ans + ansR << endl;
  } else {
    reverse(ansR.begin(), ansR.end());
    cout << ansR + ans << endl;
  }
  return 0;
}
