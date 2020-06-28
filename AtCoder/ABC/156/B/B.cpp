#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;
  long long ans = 0;

  while ( n > 0 ) {
    n /= k;
    ans++;
  }

  cout << ans << endl;
  return 0;
}
