#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  double csum[n+1];
  csum[0] = 0;
  for ( int i = 1; i < n+1; i++ ) {
    double p;
    cin >> p;
    csum[i] = ((1.0+p)/2.0) + csum[i-1];
  }

  double ans = 0;
  for ( int i = k; i <= n; i++ ) {
    double now_sum = csum[i] - csum[i-k];
    ans = ( now_sum > ans ) ? now_sum : ans;
  }

  printf("%.12f\n", ans);
  return 0;
}
