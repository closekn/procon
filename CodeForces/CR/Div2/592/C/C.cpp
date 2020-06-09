#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, p, w, d;
  cin >> n >> p >> w >> d;
  ll x, y;
  bool get_ans = false;
  for ( x = p/w; x >= 0 && p-x*w <= d*(n-x); x-- ) {
    if ( (p-w*x)%d == 0 ) { get_ans = true; break; }
  }
  y = (p-w*x)/d;
  
  if ( get_ans ) {
    cout << x << ' ' << y << ' ' << n-x-y << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}
