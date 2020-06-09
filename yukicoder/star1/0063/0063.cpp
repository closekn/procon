#include <bits/stdc++.h>
using namespace std;

int main() {
  int l , k;
  cin >> l >> k;
  if ( l <= 2*k ) {
    cout << 0 << endl;
  } else if ( l%2 == 0 && (l/2)%k == 0 ) {
    cout << (l/2) - k << endl;
  } else {
    cout << (l/2) - ((l/2)%k) << endl;
  }
  return 0;
}