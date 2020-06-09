#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ai, bi, ci;
  double a, b, c;
  long long r;
  cin >> n >> ai >> bi >> ci;
  a = (double)ai/100;
  b = (double)bi/100;
  c = (double)ci/100;
  double ha = 1.0, hb = 1.0;

  for ( int i = 1; i <= 100000; i++ ) {
    ha *= a;
    hb *= b;
  }

  return 0;
}