#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;

  while ( q-- > 0 ) {
    int a, b;
    cin >> a >> b;
    int dist = abs(a-b);
    int ans = ( dist%10 == 0 ) ? dist/10 : dist/10 + 1;
    cout << ans << endl;
  }
  return 0;
}
