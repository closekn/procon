#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;

  while ( q-- > 0 ) {
    int n, x, y;
    cin >> n >> x >> y;
    bool make = false;
    vector<int> ans;
    for ( int i = 1; i <= (y-x); i++ ) {
      if ( (y-x)%i != 0 ) { continue; }
      for ( int j = 1; j <= x; j++ ) {
        bool use_x = false, use_y = false;
        ans.clear();
        for ( int l = 0; l < n; l++ ) {
          int now = j + (i*l);
          if ( now == x ) { use_x = true; }
          if ( now == y ) { use_y = true; }
          ans.push_back(now);
        }
        if ( use_x && use_y ) { make = true; break; }
      }
      if ( make ) { break; }
    }
    
    for ( int i = 0; i < n; i++ ) {
      cout << ans[i] << ' ';
    }
    cout << '\n';
  }

  return 0;
}
