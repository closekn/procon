#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  double D, H;
  cin >> n >> D >> H;
  double d[n], h[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> d[i] >> h[i];
  }

  double ans = 0;

  for ( int i = 0; i < n; i++ ) {
    double x = D - d[i];
    double y = H - h[i];
    double a = y / x;
    double b = H - a*D;
    if ( b > ans ) { ans = b; }
  }

  printf("%.13f\n", ans);
  return 0;
}
