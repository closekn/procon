#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  string ans;
  cin >> s >> t;
  t.pop_back();
  ans = ( s == t ) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
