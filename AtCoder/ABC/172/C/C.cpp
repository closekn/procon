#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m, k;
  cin >> n >> m >> k;
  long long a[n], b[m];
  long long dp_a[n+1], dp_b[m+1];
  dp_a[0] = 0; dp_b[0] = 0;
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; dp_a[i+1] = a[i] + dp_a[i]; }
  for ( int i = 0; i < m; i++ ) { cin >> b[i]; dp_b[i+1] = b[i] + dp_b[i]; }

  long long mx_a = -1;
  long long mx_b = -1;
  for ( int i = 0; i <= n; i++ ) {
    if ( dp_a[i] > k ) { break; }
    mx_a = i;
  }
  for ( int i = 0; i <= m; i++ ) {
    if ( dp_b[i] > k ) { break; }
    mx_b = i;
  }

  int ans = 0;
  if ( dp_a[n]+dp_b[m] <= k ) { cout << mx_a + mx_b << endl; return 0; }
  if ( dp_a[1] > k && dp_b[1] > k ) { cout << 0 << endl; return 0; }

  int ia = mx_a;
  int ib = 0;
  for ( ; ia >= 0; ia-- ) {
    while ( ib < mx_b && dp_a[ia]+dp_b[ib+1] <= k ) { ib++; }
    if ( dp_a[ia]+dp_b[ib] <= k ) {
      ans = ( ia+ib > ans ) ? ia+ib : ans;
    }
  }

  cout << ans << endl;
  return 0;
}
