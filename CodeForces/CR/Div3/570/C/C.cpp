#include <bits/stdc++.h>
using namespace std;

int main() {
  int que;
  cin >> que;

  for ( int q = 0; q < que; q++ ) {
    long long k, n, a, b;
    cin >> k >> n >> a >> b;
    long long dis = a - b;
    long long ans;
    if ( k <= n*b ) {
      ans = -1;
    } else {
      k -= n*b + 1;
      ans = k/dis;
      ans = ( ans > n ) ? n : ans;
    }
    cout << ans << endl;
  }

  return 0;
}