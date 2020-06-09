#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  ll a[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
  }

  sort(a, a+n);
  ll x = 0;
  ll y = 0;

  int i = 0;
  for ( ; i < n/2; i++ ) {
    x += a[i];
  }
  for ( ; i < n; i++ ) {
    y += a[i];
  }

  ll ans = x*x + y*y;
  cout << ans << endl;
  return 0;
}
