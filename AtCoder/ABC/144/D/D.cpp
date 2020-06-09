#include <bits/stdc++.h>
using namespace std;

double pi = 2.0 * asin(1.0);
double unit_r = 180.0 / pi;

int main() {
  double a, b, x;
  cin >> a >> b >> x;
  if ( a*a*b/2 <= x ) {
    double lim = a*a*b - x;
    printf("%.10f\n", atan(lim/a/a/a*2)*unit_r);
  } else {
    printf("%.10f\n", 90.0 - atan(x/b/b/a*2)*unit_r);
  }
  
  return 0;
}
