#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  int tmp;
  if ( a == 0 || b == 0 ) {
    return ( a == 0 ) ? b : a;
  }
  while ( a%b != 0 ) {
    tmp = b;
    b = a % b;
    a = tmp;
  }
  return b;
}

all_gcd(int a[], int n) {
  int g = gcd(abs(a[0]), abs(a[1]));
  for ( int i = 2; i < n; i++ ) {
    g = gcd(g, abs(a[i]));
  }
  return g;
}

int main() {
  int n, k;
  cin >> n >> k;
  int a[n];
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }
  
  int p = 0;
  sort(a, a+n);
  while ( 1 ) {
    if ( a[p] < k ) { k -= a[0]; a[0] = 0; p++; } else { break; }
  }

  return 0;
}
