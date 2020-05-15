#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  double ans = ( n%2 == 0 ) ? (n/2)/(double)n : ((n+1)/2)/(double)n;
  printf("%.10f\n", ans);
  return 0;
}
