#include <bits/stdc++.h>
using namespace std;

long long divisor(long long n) {
  long long ret = 1;
  for ( int i = 2; i <= sqrt(n); i++ ) {
    int cnt = 0;
    while ( n % i == 0 ) {
      cnt++;
      n /= i;
    }
    ret *= (cnt + 1);
    if ( n == 1 ) { break; }
  }
  if ( n != 1 ) { ret *= 2; }
  return ret;
}

int main() {
  int n;
  cin >> n;

  long long ans = 0;
  for ( int c = 1; c < n; c++ ) {
    ans += divisor(n-c);
  }

  cout << ans << endl;
  return 0;
}
