#include <bits/stdc++.h>
using namespace std;

double calc(int m, int k);

int main() {
  int n, k;
  cin >> n >> k;
  double p = 0.0;

  for ( int i = 1; i <= n; i++ ) {
    p += (1.0/n) * calc(i, k);
  }

  printf("%.12f\n", p);
  return 0;
}

double calc(int m, int k) {
  double p = 1.0;
  while ( m < k ) {
    p /= 2.0;
    m *= 2;
  }
  return p;
}