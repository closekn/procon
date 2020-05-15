#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, max;
  cin >> n;
  int v[n], c[n];
  for ( int i = 0; i < n; i++ ) { cin >> v[i]; }
  for ( int i = 0; i < n; i++ ) { cin >> c[i]; }

  max = 0;
  for ( int i = 0; i < n; i++ ) {
    if ( v[i]-c[i] > 0 ) { max += v[i]-c[i]; }
  }

  cout << max << endl;
  return 0;
}