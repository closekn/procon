#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
ll k;
int a[200001];
int f[200001];

bool solve(ll x) {
  ll tmp = 0;
  for ( int i = 0; i < n; i++ ) {
    ll res = a[i] - x / f[i];
    if ( res < 0 ) { continue; }
    tmp += res;
  }
  if ( tmp <= k ) { return true; } else { return false; }
}

int main() {
  cin >> n >> k;

  for ( ll i = 0; i < n; i++ ) { cin >> a[i]; }
  for ( ll i = 0; i < n; i++ ) { cin >> f[i]; }

  sort(a, a+n);
  sort(f, f+n, greater<int>());

  ll l = 0;
  ll r = 1e18;

  for ( int i = 0; i < 150; i++ ) {
    ll m = (r + l) / 2;
    if ( solve(m) ) {
      r = m;
    } else {
      l = m;
    }
  }

  cout << r << endl;
  return 0;
}
