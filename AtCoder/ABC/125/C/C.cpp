#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if ( a == 0 ) { return b; }
  if ( b == 0 ) { return a; }
  int tmp;
  while ( a%b != 0 ) {
    tmp = b;
    b = a % b;
    a = tmp;
  }
  return b;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
  }

  vector<int> left(n+1), right(n+1);
  left[0] = right[n] = 0;
  for ( int i = 0; i < n; i++ ) {
    left[i+1] = gcd(left[i], a[i]);
  }
  for ( int i = n-1; i >= 0; i-- ) {
    right[i] = gcd(right[i+1], a[i]);
  }

  int ans = 0;
  for ( int i = 0; i < n; i++ ) {
    int gcd_without_i = gcd(left[i], right[i+1]);
    if ( gcd_without_i > ans ) { ans = gcd_without_i; }
  }
  cout << ans << endl;
  return 0;
}