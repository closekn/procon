#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;
  int a[n], sum = 0;
  for ( int i = 0; i < n; i++ ) {
    a[i] = l + i;
    sum += a[i];
  }
  int min = 20001, pos = -1;
  for ( int i = 0; i < n; i++ ) {
    if ( min > abs(a[i]) ) { min = abs(a[i]); pos = i; }
  }
  cout << sum-a[pos] << endl;
  return 0;
}