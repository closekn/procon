#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int h[n];
  for ( int i = 0; i < n; i++ ) { cin >> h[i]; }

  int ans = 0;
  int move = 0;
  for ( int i = 1; i < n; i++ ) {
    if ( h[i] <= h[i-1] ) {
      move++;
    } else {
      ans = max(ans, move);
      move = 0;
    }
  }
  ans = max(ans, move);

  cout << ans << endl;
  return 0;
}
