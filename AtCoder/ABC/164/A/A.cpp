#include <bits/stdc++.h>
using namespace std;

int main() {
  int s, w;
  cin >> s >> w;
  string ans = ( w >= s ) ? "unsafe" : "safe";
  cout << ans << endl;
  return 0;
}
