#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  int tmp;
  while ( a%b != 0 ) {
    tmp = b;
    b = a % b;
    a = tmp;
  }
  return b;
}

int main() {
  int n, s;
  cin >> n >> s;
  int x[n+1];
  for ( int i = 0; i < n; i++ ) { cin >> x[i]; }
  x[n] = s;
  sort(x, x+n+1);
  int dif[n];
  for ( int i = 0; i < n; i++ ) {
    dif[i] = x[i+1] - x[i];
  }
  int ans = dif[0];
  for ( int i = 1; i < n; i++ ) {
    ans = gcd(ans, dif[i]);
  }

  cout << ans << endl;
  return 0;
}
