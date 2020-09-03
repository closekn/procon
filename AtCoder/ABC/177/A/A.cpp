#include <bits/stdc++.h>
using namespace std;

int main() {
  int d, t, s;
  cin >> d >> t >> s;
  int time = ( d%s == 0 ) ? d/s : d/s + 1;
  string ans = ( t >= time ) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
