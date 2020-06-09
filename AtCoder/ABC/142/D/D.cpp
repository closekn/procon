#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
  ll tmp;
  while ( a%b != 0 ) {
    tmp = b;
    b = a % b;
    a = tmp;
  }
  return b;
}

bool isPrime(ll x) {
  for ( ll i = 2; i * i <= x; i++ ) {
    if ( x%i == 0 ) { return false; }
  }
  return true;
}

int main() {
  ll a, b;
  cin >> a >> b;
  ll m = gcd(a, b);
  ll ans = 0;

  ll rootm = (ll) sqrt(m);

  for ( ll i = 1; i <= sqrt(m); i++ ) {
    if ( !isPrime(i) ) { continue; }
    if ( m%i != 0 ) { continue; }
    ans++;
    if ( m/i == i ) { continue; }
    if ( isPrime(m/i) ) { ans++; }
  }

  cout << ans << endl;
  return 0;
}
