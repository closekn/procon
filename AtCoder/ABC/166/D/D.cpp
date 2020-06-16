#include <bits/stdc++.h>
using namespace std;

const int mn = -120;
const int mx = 120;

int main() {
  long long x;
  cin >> x;

  long long a, b;
  for ( a = mn; a <= mx; a++ ) {
    bool find = false;
    for ( b = mn; b <= mx; b++ ) {
      if ( pow(a, 5) - pow(b, 5) == x ) { find = true; break; }
    }
    if ( find ) { break; }
  }

  cout << a << ' ' << b << endl;
  return 0;
}
