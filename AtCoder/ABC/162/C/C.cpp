#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  int tmp;
  while ( a%b != 0 ) {
    tmp = b;
    b = a % b;
    a = tmp;
  }
  return b;
}

int main() {
  int k;
  cin >> k;

  int ans = 0;
  for ( int a = 1; a <= k; a++ ) {
    for ( int b = 1; b <= k; b++ ) {
      for ( int c = 1; c <= k; c++ ) {
        ans += gcd(gcd(a, b), c);
      }
    }
  }

  cout << ans << endl;
  return 0;
}
