#include <bits/stdc++.h>
using namespace std;

const int cycle_a = 12 * 60;
const int cycle_b = 60;


int main() {
  int a, b, h, m;
  cin >> a >> b >> h >> m;
  double angle_a = ((double) (h*60+m) / cycle_a) * 360;
  double angle_b = ((double) m / cycle_b) * 360;
  double angle = angle_b - angle_a;
  double c2 = a*a + b*b - 2*a*b*cos(M_PI / 180 * angle);
  double c = sqrt(c2);
  printf("%.20f\n", c);
  return 0;
}
