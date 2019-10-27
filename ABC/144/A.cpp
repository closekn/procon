#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int ans = ( a < 10 && b < 10 ) ? a*b : -1;
  cout << ans << endl;
  return 0;
}
