#include <bits/stdc++.h>
using namespace std;

const int K_LIM = 100;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n, 0);
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }

  for ( int q = 0; q < k; q++ ) {
    if ( q > K_LIM ) { break; }
    vector <int> b(n,0);
    for( int i = 0; i < n; i++ ) {
      int l = max(0, i-a[i]);
      int r = min(n-1, i+a[i]);
      b[l]++;
      if ( r+1 < n ) { b[r+1]--; }
    }
    for( int i = 1; i < n; i++ ) { b[i] += b[i-1]; }
    for ( int i = 0; i < n; i++ ) { a[i] = b[i]; }
  }

  for ( int i = 0; i < n; i++ ) {
    cout << a[i] << ' ';
  }
  cout << endl;
  return 0;
}
