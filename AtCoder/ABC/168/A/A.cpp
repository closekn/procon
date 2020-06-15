#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;
  char c = n[n.size()-1];
  string ans = "hon";
  if ( c == '3' ) { ans = "bon"; }
  if ( c == '0' || c == '1' || c == '6' || c == '8') { ans = "pon"; }
  cout << ans << endl;
  return 0;
}
