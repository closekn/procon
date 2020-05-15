#include <bits/stdc++.h>
using namespace std;

int main() {
  int d;
  cin >> d;
  string ans = "Christmas";
  while ( d++ < 25 ) { ans += " Eve"; }
  cout << ans << endl;
  return 0;
}
