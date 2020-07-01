#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, n;
  cin >> h >> n;
  while ( n-- > 0 ) {
    int a;
    cin >> a;
    h -= a;
  }
  string ans = ( h <= 0 ) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
