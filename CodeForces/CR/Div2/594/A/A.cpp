#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int t;
  cin >> t;

  while ( t-- > 0 ) {

    int n;
    cin >> n;
    ll p_0 = 0;
    ll p_1;
    for ( int i = 0; i < n; i++ ) {
      int tp;
      cin >> tp;
      p_0 += ( tp%2 == 0 ) ? 1 : 0;
    }
    p_1 = n - p_0;
    int m;
    cin >> m;
    ll q_0 = 0;
    ll q_1;
    for ( int i = 0; i < m; i++ ) {
      int tq;
      cin >> tq;
      q_0 += ( tq%2 == 0 ) ? 1 : 0;
    }
    q_1 = m - q_0;
    ll ans = ( p_0*q_0 ) + ( p_1*q_1 );
    cout << ans << endl;

  }

  return 0;
}
