#include <bits/stdc++.h>
using namespace std;

const long long LIM = 2e18;

int main() {
  long long x, y, a, b;
  cin >> x >> y >> a >> b;

  long long ex = 0;
  while ( (double)x*a <= LIM && x*a < x+b && x*a < y ) {
    x *= a;
    ex++;
  }
  ex += (y-1-x) / b;

  cout << ex << endl;
  return 0;
}
