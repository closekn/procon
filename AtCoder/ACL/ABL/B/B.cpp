#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  string ans = "Yes";
  if ( b < c || d < a ) { ans = "No"; }
  cout << ans << endl;
  return 0;
}
