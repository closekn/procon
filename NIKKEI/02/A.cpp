#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = ( n%2 == 0 ) ? n/2 - 1 : n/2;
  cout << ans << endl;
  return 0;
}
