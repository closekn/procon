#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int l[n];
  for ( int i = 0; i < n; i++ ) { cin >> l[i]; }

  int ans = 0;
  for ( int a = 0; a < n-2; a++ ) {
    for ( int b = a+1; b < n-1; b++ ) {
      for ( int c = b+1; c < n; c++ ) {
        if ( l[a] == l[b] || l[b] == l[c] || l[c] == l[a] ) { continue; }
        if ( l[a]+l[b] > l[c] && l[a]+l[c] > l[b] && l[b]+l[c] > l[a] ) { ans++; }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
