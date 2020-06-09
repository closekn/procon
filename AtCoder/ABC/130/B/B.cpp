#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  int l[n];
  for ( int i = 0; i < n; i++ ) { cin >> l[i]; }

  int ct = 1, d = 0;  
  for ( int i = 0; i < n; i++ ) {
    d += l[i];
    if ( d > x ) { break; }
    ct++;
  }

  cout << ct << endl;
  return 0;
}