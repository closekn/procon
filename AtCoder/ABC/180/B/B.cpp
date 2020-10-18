#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long manhattan = 0;
  long long euclid = 0;
  long long chebyshev = 0;

  for ( int i = 0; i < n; i++ ) {
    long long x;
    cin >> x;
    x = abs(x);
    manhattan += x;
    euclid += x*x;
    chebyshev = max(chebyshev, x);
  }

  cout << manhattan << endl;
  printf("%.15f\n", sqrt(euclid));
  cout << chebyshev << endl;
  return 0;
}
