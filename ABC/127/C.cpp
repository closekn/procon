#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, a = 0, lmax, rmin;
  cin >> n >> m;
  int l[m], r[m];
  bool ans[n+1];
  for ( int i = 0; i < m; i++ ) {
    cin >> l[i] >> r[i];
  }
  for ( int i = 1; i <= n; i++ ) {
    ans[i] = true;
  }
  lmax = l[0]; rmin = r[0];
  for ( int i = 1; i < m; i++ ) {
    lmax = ( l[i] > lmax ) ? l[i] : lmax;
    rmin = ( r[i] < rmin ) ? r[i] : rmin;
  }

  for ( int i = 1; i <= n; i++ ) {
    if ( !(lmax <= i && i <= rmin) ) {
      ans[i] = false;
    }
  }
  for ( int i = 1; i <= n; i++ ) {
    if (ans[i]) { a++; }
  }

  cout << a << endl;
  return 0;
}