#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  int a, b;
  cin >> k;
  cin >> a >> b;
  string ans = "NG";
  for ( int i = a; i <= b; i++ ) {
    if ( i%k == 0 ) { ans = "OK"; }
  }
  cout << ans << endl;
  return 0;
}
