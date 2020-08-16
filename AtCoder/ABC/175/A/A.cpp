#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  if ( s == "RRR" ) { ans = 3; }
  else if ( s == "RRS" || s == "SRR" ) { ans = 2; }
  else if ( s == "SSS" ) { ans = 0; }
  else { ans = 1; }
  cout << ans << endl;
  return 0;
}
