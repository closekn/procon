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

map<ll, int> prime_factor(ll n) {
  map<ll, int> ret;
  for (ll i = 2; i * i <= n; i++)  {
    while ( n % i == 0 ) {
      ret[i]++;
      n /= i;
    }
  }
  if ( n != 1 ) { ret[n] = 1; }
  return ret;
}

int main() {
  ll a, b;
  cin >> a >> b;
  cout << prime_factor(gcd(a, b)).size() + 1 << endl;
  return 0;
}
