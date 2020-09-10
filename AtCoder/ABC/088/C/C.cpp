#include <bits/stdc++.h>
using namespace std;

int main() {
  int c[3][3];
  for ( int i = 0; i < 3; i++ ) {
    for ( int j = 0; j < 3; j++ ) {
      cin >> c[i][j];
    }
  }

  string ans = "No";
  for ( int k = -100; k <= 100; k++ ) {
    int a[3], b[3];
    a[0] = k;
    b[0] = c[0][0] - a[0];
    for ( int i = 1; i < 3; i++ ) { a[i] = c[i][0] - b[0]; }
    for ( int j = 1; j < 3; j++ ) { b[j] = c[0][j] - a[0]; }
    if ( a[1]+b[1] == c[1][1] && a[1]+b[2] == c[1][2] && a[2]+b[1] == c[2][1] && a[2]+b[2] == c[2][2] ) {
      ans = "Yes";
      break;
    }
  }

  cout << ans << endl;
  return 0;
}
