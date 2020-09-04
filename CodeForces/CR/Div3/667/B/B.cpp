#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int main() {
  int q;
  cin >> q;

  while ( q-- > 0 ) {
    long long a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    long long ans = INF;
    long long tmp_a, tmp_b, tmp_n;
    // a -> min
    if ( a-x <= n ) {
      tmp_a = x;
      tmp_n = n - (a-x);
      tmp_b = ( b-y <= tmp_n ) ? y : b-tmp_n;
    } else {
      tmp_a = a-n;
      tmp_b = b;
    }
    ans = min(ans, tmp_a*tmp_b);
    // b -> min
    if ( b-y <= n ) {
      tmp_b = y;
      tmp_n = n - (b-y);
      tmp_a = ( a-x <= tmp_n ) ? x : a-tmp_n;
    } else {
      tmp_b = b-n;
      tmp_a = a;
    }
    ans = min(ans, tmp_a*tmp_b);
    cout << ans << endl;
  }

  return 0;
}
