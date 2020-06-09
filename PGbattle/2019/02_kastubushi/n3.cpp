#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[2*n];
  for ( int i = 0; i < 2*n; i++ ) {
    cin >> a[i];
  }
  sort(a, a+2*n);

  int m = 1e9+1;
  for ( int i = 0; i < n; i++ ) {
    int tmp = a[i+n] - a[i];
    if ( m > tmp ) { m = tmp; }
  }

  cout << m << endl;
  return 0;
}
