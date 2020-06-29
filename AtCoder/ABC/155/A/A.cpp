#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  string ans = (
    (a == b && b == c && c == a) ||
    (a != b && b != c && c != a)
  ) ? "No" : "Yes";
  cout << ans << endl;
  return 0;
}
