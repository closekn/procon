#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  int c[10][10];
  for ( int i = 0; i < 10; i++ ) {
    for ( int j = 0; j < 10; j++ ) {
      cin >> c[i][j];
    }
  }

  for ( int k = 0; k < 10; k++ ) {
    for ( int i = 0; i < 10; i++ ) {
      for ( int j = 0; j < 10; j++ ) {
        c[i][j] = min(c[i][j], c[i][k]+c[k][j]);
      }
    }
  }

  long long ans = 0;
  for ( int i = 0; i < h*w; i++ ) {
    int n;
    cin >> n;
    if ( n != -1 ) { ans += c[n][1]; }
  }

  cout << ans << endl;
  return 0;
}
