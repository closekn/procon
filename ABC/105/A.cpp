#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int ans = ( n%k == 0 ) ? 0 : 1;
  cout << ans << endl;
  return 0;
}
