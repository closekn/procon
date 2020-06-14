#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, n;
  cin >> x >> n;
  if ( n == 0 ) { cout << x << endl; return 0; }
  int p[n];
  for ( int i = 0; i < n; i++ ) { cin >> p[i]; }
  sort(p, p+n);
  int pos = n-1;
  int dif = abs(101-x);
  int ans = 101;
  for ( int i = 100; i >= -1; i-- ) {
    if ( pos >= 0 && i == p[pos] ) {
      pos--;
      continue;
    }
    int now_dif = abs(i-x);
    if ( now_dif <= dif ) {
      dif = now_dif;
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}
