#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;
  string ans = ( n[0] == '7' || n[1] == '7' || n[2] == '7' ) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
