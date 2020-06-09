#include <bits/stdc++.h>
using namespace std;

int main() {
  int que;
  cin >> que;

  for ( int q = 0; q < que; q++ ) {
    int n, s, t;
    cin >> n >> s >> t;
    int ans = max(n-s, n-t) + 1;
    cout << ans << endl;
  }

  return 0;
}