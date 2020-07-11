#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> ans(n+1, 0);
  int rootn = sqrt(n);
  for ( int x = 1; x <= rootn; x++ ) {
    for ( int y = 1; y <= rootn; y++ ) {
      for ( int z = 1; z <= rootn; z++ ) {
        int now = x*x + y*y + z*z + x*y + y*z + z*x;
        if ( now <= n ) {
          ans[now]++;
        }
      }
    }
  }

  for ( int i = 1; i <= n; i++ ) {
    cout << ans[i] << endl;
  }
  return 0;
}
