#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll l[51], p[51];

ll eat_patty(ll n, ll x) {
  if ( n == 0 )         { return 1; }
  if ( x == 1 )         { return 0; }
  if ( x <= 1+l[n-1] )  { return eat_patty(n-1, x-1); }
  if ( x == 2+l[n-1] )  { return p[n-1] + 1; }
  if ( x <= 2+2*l[n-1]) { return p[n-1] + 1 + eat_patty(n-1, x-2-l[n-1]); }
  return p[n];
}

int main() {
  ll n, x;
  cin >> n >> x;
  l[0] = 1;
  p[0] = 1;
  for ( ll i = 1; i <= n; i++ ) {
    l[i] = l[i-1]*2 + 3;
    p[i] = p[i-1]*2 + 1;
  }

  cout << eat_patty(n, x) << endl;
  return 0;
}

