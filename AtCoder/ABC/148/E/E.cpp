#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  long long ans = 0;
  if ( n%2 == 0 ) {
    long long t = 10;
    while ( n >= t ) {
      ans += (n/t);
      t *= 5;
    }
  }

  cout << ans << endl;
  return 0;
}
