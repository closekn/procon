#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string n;
  cin >> n;
  string ans = (
    (n[0] == n[1] && n[1] == n[2]) ||
    (n[1] == n[2] && n[2] == n[3])
  ) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
