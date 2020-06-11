#include <bits/stdc++.h>
using namespace std;

map<long long, int> prime_factor(long long n) {
  map<long long, int> ret;
  for (long long i = 2; i * i <= n; i++)  {
    while ( n % i == 0 ) {
      ret[i]++;
      n /= i;
    }
  }
  if ( n != 1 ) { ret[n] = 1; }
  return ret;
}

int main() {
  long long n;
  cin >> n;
  int ans = 0;
  map<long long, int> pf = prime_factor(n);
  for ( auto p = pf.begin(); p != pf.end(); p++ ) {
    int ct = 1;
    while ( p->second >= ct ) {
      ans++;
      p->second -= ct;
      ct++;
    }
  }
  cout << ans << endl;
  return 0;
}
