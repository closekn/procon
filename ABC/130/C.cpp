#include <bits/stdc++.h>
using namespace std;

int main() {
  double w, h, x, y;
  cin >> w >> h >> x >> y;
  double cx = w/2, cy = h/2;

  double s = w*h/2;
  int d = (x == cx && y == cy) ? 1 : 0;

  printf("%f %d\n", s, d);
  return 0;
}