#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n+1], b[n+1], c[n];
  for ( int i = 1; i <= n; i++ ) { cin >> a[i]; }
  for ( int i = 1; i <= n; i++ ) { cin >> b[i]; }
  for ( int i = 1; i <= n-1; i++ ) { cin >> c[i]; }

  int ans = 0;
  for ( int i = 1; i <= n; i++ ) {
    ans += b[a[i]];
    if ( i != n && a[i+1] == a[i]+1 ) { ans += c[a[i]]; }
  }

  cout << ans << endl;
  return 0;
}
