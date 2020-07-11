#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  string s;
  cin >> n >> k;
  cin >> s;

  int ans = 0;
  int pls1 = 0;
  int pls2 = 0;
  if ( s[0] == 'L' ) { pls1++; }
  if ( s[n-1] == 'R' ) { pls1++; }
  for ( int i = 0; i < n; i++ ) {
    if ( i != n-1 && s[i] == 'R' && s[i+1] == 'L' ) { pls2++; }
    if ( i != n-1 && s[i] == 'R' && s[i+1] == 'R' ) { ans++; }
    if ( i != 0   && s[i] == 'L' && s[i-1] == 'L' ) { ans++; }
  }

  if ( pls2 >= k ) {
    ans += (2*k);
  } else {
    ans += (2*pls2);
    k -= pls2;
    if ( pls1 <= k ) {
      ans += pls1;
    } else {
      ans += k;
    }
  }
  ans = ( ans == n ) ? ans-1 : ans;

  cout << ans << endl;
  return 0;
}
