#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n];
  int all = 0;
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
    all += a[i];
  }
  sort(a, a+n);
  string ans = "Yes";
  if ( a[n-m]*(4*m) < all ) {
    ans = "No";
  }
  cout << ans << endl;
  return 0;
}
