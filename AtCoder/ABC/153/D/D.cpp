#include <bits/stdc++.h>
using namespace std;

int main() {
  long long h;
  cin >> h;

  long long ans = 0;
  long long n = 1;
  while ( h > 0 ) {
    ans += n;
    h /= 2;
    n <<= 1;
  }

  cout << ans << endl;
  return 0;
}
