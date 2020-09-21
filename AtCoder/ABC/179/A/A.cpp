#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans = ( s[s.length()-1] == 's' ) ? s+"es" : s+"s";
  cout << ans << endl;
  return 0;
}
