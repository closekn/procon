#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, n2;
  cin >> n;
  n2 = n/2;
  int a[n], a2[n2], max = 0, tmp;
  bool flag = false;
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }
  for ( int i = 0; i < n2; i++ ) {
    if ( i == n2-1 && n%2 == 1 ) {
      a2[i] = a[2*i]; flag = true;
    }
    a2[i] = __gcd(a[2*i], a[2*i+1]);
  }

  for ( int i = 0; i < n; i++ ) {
    if ( i = n-1 && n%2 == 1 ) {
      tmp = a[0];
    } else {
      tmp = ( i%2 == 0 ) ? a[i+1] : a[i-1];
    }
    for ( int k = 0; k < n2; k++ ) {
      if ( k == i/2 ) { continue; }
      tmp = __gcd(tmp, a2[k]);
    }
    max = ( tmp > max ) ? tmp : max;
  }

  cout << max << endl;
  return 0;
}