#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int l[n];
  for ( int i = 0; i < n; i++ ) { cin >> l[i]; }
  sort(l, l+n);
  int ans = 0;
  for ( int i = n-1; i > 1; i-- ) {
    for ( int j = 0; j < i; j++ ) {
      for ( int k = j+1; k < i; k++ ) {
        if ( l[i] < l[j]+l[k] ) {
          ans += i-k;
          break;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
