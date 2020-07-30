#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long ans = 0;
  while ( n-- > 0 ) {
    long long a;
    cin >> a;
    a--;
    ans += a;
  }
  cout << ans << endl;
  return 0;
}
