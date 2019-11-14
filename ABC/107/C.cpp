#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int x[n];
  for ( int i = 0; i < n ; i++ ) {
    cin >> x[i];
  }

  int mn = 1e9;
  for ( int l = 0; l+k-1 < n; l++ ) {
    int r = l+k-1;
    int tmp = min(abs(x[l])+abs(x[r]-x[l]), abs(x[r])+abs(x[r]-x[l]));
    if ( tmp < mn ) { mn = tmp; }
  }

  cout << mn << endl;
  return 0;
}
