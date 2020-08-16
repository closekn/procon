#include <bits/stdc++.h>
using namespace std;

int main() {
  long long x, k, d;
  cin >> x >> k >> d;

  long long ans;
  x = abs(x);
  long long num = x/d;
  if ( num <= k ) {
    ans = abs(x - (d*num));
    k -= num;
    ans = ( k%2 == 0 ) ? abs(x-(d*num)) : abs(x-(d*(num+1)));
  } else {
    ans = abs(x-(d*k));
  }

  cout << ans << endl;
  return 0;
}
