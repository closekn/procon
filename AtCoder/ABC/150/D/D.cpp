#include <bits/stdc++.h>
using namespace std;

int gcd(long long a, long long b) {
  int tmp;
  while ( a%b != 0 ) {
    tmp = b;
    b = a % b;
    a = tmp;
  }
  return b;
}

int lcm(long long a, long long b) {
  return a * b / gcd(a, b);
}

int main() {
  int n, m;
  cin >> n >> m;
  long long a[n];
  long long t;
  cin >> a[0];
  a[0] /= 2;
  t = a[0];
  for ( int i = 1; i < n; i++ ) {
    cin >> a[i];
    a[i] /= 2;
    t = lcm(t, a[i]);
  }

  long long ans = m/(2*t) + (m/t)%2;
  for ( int i = 0; i < n; i++ ) {
    if ( (t/a[i])%2 == 0 ) { ans = 0; break; }
  }
  cout << ans << endl;
  return 0;
}
