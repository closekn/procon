#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  string s[h];
  for ( int i = 0; i < h; i++ ) { cin >> s[i]; }

  int ans = 0;
  for ( int i = 0; i < h; i++ ) {
    for ( int j = 0; j < w; j++ ) {
      if ( s[i][j] == '.' ) {
        if ( i-1 >= 0 && s[i-1][j] == '.' ) { ans++; }
        if ( j-1 >= 0 && s[i][j-1] == '.' ) { ans++; }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
