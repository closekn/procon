#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, n;
  cin >> k >> n;
  int a[n];
  int interval[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
  }
  for ( int i = 0; i < n; i++ ) {
    interval[i] = ( i+1 < n ) ? a[i+1] - a[i] : k-a[i] + a[0];
  }
  sort(interval, interval+n);
  cout << k - interval[n-1] << endl;
  return 0;
}
