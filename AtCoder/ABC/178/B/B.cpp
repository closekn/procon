#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18 + 7;

int main() {
  vector<long long> x(2), y(2);
  cin >> x[0] >> x[1] >> y[0] >> y[1];
  if ( x[0] < 0 && 0 < x[1] ) { x.push_back(0); }
  if ( y[0] < 0 && 0 < y[1] ) { y.push_back(0); }
  long long ans = -INF;
  for ( int i = 0; i < x.size(); i++ ) {
    for ( int j = 0; j < y.size(); j++ ) {
      ans = max(ans, x[i]*y[j]);
    }
  }
  cout << ans << endl;
  return 0;
}
