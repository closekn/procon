#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int rs[26], rt[26];
  fill(rs, rs+26, 0);
  fill(rt, rt+26, 0);

  string ans = "Yes";
  for ( int i = 0; i < s.length(); i++ ) {
    int si = s[i]-'a';
    int ti = t[i]-'a';
    rs[si]++;
    rt[ti]++;
    if ( rs[si] != rt[ti] ) {
      ans = "No";
      break;
    }
  }

  cout << ans << endl;
  return 0;
}
