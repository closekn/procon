#include <bits/stdc++.h>
using namespace std;

double t, a;

double calc_dis(double x) { return abs(a-(t - x*0.006)); }

int main() {
  int n;
  cin >> n >> t >> a;
  double h[n];
  for ( int i = 0; i < n; i++ ) { cin >> h[i]; }
  int ans = 1;
  double dis = calc_dis(h[0]);
  for ( int i = 1; i < n; i++ ) {
    if ( dis > calc_dis(h[i]) ) { dis = calc_dis(h[i]); ans = i+1; }
  }
  cout << ans << endl;
  return 0;
}
