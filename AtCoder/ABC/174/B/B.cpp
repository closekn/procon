#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, d;
  cin >> n >> d;
  int ans = 0;
  for ( int i = 0; i < n; i++ ) {
    long long x, y;
    cin >> x >> y;
    if ( d*d >= x*x + y*y ) { ans++; }
  }
  cout << ans << endl;
  return 0;
}
