#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int h[n];
  for ( int i = 0; i < n; i++ ) { cin >> h[i]; }
  sort(h, h+n);

  int mn = 1e9 + 1;
  for ( int i = 0; i+k-1 < n; i++ ) {
    mn = ( mn > h[i+k-1]-h[i] ) ? h[i+k-1]-h[i] : mn;
  }

  cout << mn << endl;
  return 0;
}
