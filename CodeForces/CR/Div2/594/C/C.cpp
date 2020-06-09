#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll MOD = 1e9+7;

int main() {
  int n, m;
  cin >> n >> m;

  ll ans = 2;
  ll cx[n+1];
  cx[0] = 0;
  cx[1] = 2;
  for ( int i = 2; i <= n; i++ ) {
    cx[i] = cx[i-1] + cx[i-2];
    cx[i] %= MOD;
  }
  for ( int i = 2; i <= n; i++ ) {
    ans += cx[i-1];
    ans %= MOD;
  }

  ll cy[m+1];
  cy[0] = 0;
  cy[1] = 2;
  for ( int i = 2; i <= m; i++ ) {
    cy[i] = cy[i-1] + cy[i-2];
    cy[i] %= MOD;
  }
  for ( int i = 2; i <= m; i++ ) {
    ans += cy[i-1];
    ans %= MOD;
  }

  cout << ans << endl;
  return 0;
}
