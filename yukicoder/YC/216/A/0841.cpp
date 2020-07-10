#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  int ans = 31;
  bool ch9_1 = s1 == "Sat" || s1 == "Sun";
  bool ch9_2 = s2 == "Sat" || s2 == "Sun";
  if ( ch9_1 && ch9_2 ) {
    ans = 33;
  } else if ( ch9_1 ) {
    ans = 32;
  }
  cout << "8/" << ans << endl;
  return 0;
}