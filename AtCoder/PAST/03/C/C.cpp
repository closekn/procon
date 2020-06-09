#include <bits/stdc++.h>
using namespace std;

const long long lim = 1e9;

long long GP_n( long long a, long long r, long long n ) {
  while ( n-- > 1 ) {
    a *= r;
    if ( a > lim ) { break; }
  }
  return ( n == 0 ) ? a : -1;
}

int main() {
  long long a, r, n;
  cin >> a >> r >> n;
  long long calc = GP_n(a, r, n);
  if ( calc != -1 ) {
    cout << calc << endl;
  } else {
    cout << "large" << endl;
  }
  return 0;
}
