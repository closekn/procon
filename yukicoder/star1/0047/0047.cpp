#include <bits/stdc++.h>
using namespace std;

int main() {
  double n;
  cin >> n;
  int ans = 0;
  while ( n > 1 ) {
    n /= 2.0;
    ans++;
  }
  cout << ans << endl;
  return 0;
}