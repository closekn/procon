#include <bits/stdc++.h>
using namespace std;

int div_num(int n) {
  int rt = 0;

  for ( int i = 1; i <= n; i++ ) {
    if ( n%i == 0 ) { rt++; }
  }

  return rt;
}

int main() {
  int n;
  cin >> n;

  int ans = 0;
  for ( int i = 1; i <= n; i+=2 ) {
    if ( div_num(i) == 8 ) { ans++; }
  }

  cout << ans << endl;
  return 0;
}
