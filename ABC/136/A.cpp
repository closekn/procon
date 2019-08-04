#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  int ans;
  cin >> a >> b >> c;
  ans = c+b-a;
  if ( ans < 0 ) { ans = 0; }
  cout << ans << endl;
  return 0;
}
