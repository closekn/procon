#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
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
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }
  
  int ans = a[0];
  for ( int i = 1; i < n; i++ ) { ans = gcd(ans, a[i]); }
  
  cout << ans << endl;
  return 0;
}
