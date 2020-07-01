#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, a;
  cin >> h >> a;
  int ans = ( h%a == 0 ) ? h/a : h/a+1;
  cout << ans << endl;
  return 0;
}
