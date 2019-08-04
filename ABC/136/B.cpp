#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int ans;
  cin >> n;
  if ( n < 10 ) { ans = n; }
  else if ( n < 100 ) { ans = 9; }
  else if ( n < 1000 ) { ans = n-90; }
  else if ( n < 10000 ) { ans = 909; }
  else if ( n < 100000 ) { ans = n-9090; }
  else if ( n == 100000 ) { ans = 90909; }
  cout << ans << endl;
  return 0;
}
