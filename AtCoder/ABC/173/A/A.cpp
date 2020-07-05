#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = ( n%1000 == 0 ) ? 0 : 1000-n%1000;
  cout << ans << endl;
  return 0;
}
