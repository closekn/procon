#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  int x[n][d];
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < d; j++ ) {
      cin >> x[i][j];
    }
  }
  int ans = 0;
  for ( int i = 0; i < n; i++ ) {
    for ( int k = i+1; k < n; k++ ) {
      double dis = 0;
      for ( int j = 0; j < d; j++ ) { dis += pow(x[i][j]-x[k][j], 2); }
      dis = sqrt(dis);
      double a, b;
      b = modf(dis, &a);
      if ( b == 0.0 ) { ans++; }
    }
  }
  cout << ans << endl;
  return 0;
}
