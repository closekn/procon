#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  ll mx = 1;
  for ( ll i = 1; i <= sqrt(n); i++ ) {
    if ( n % i != 0 ) { continue; }
    mx = i;
  }
  cout << (mx-1) + (n/mx - 1) << endl;
  return 0;
}
