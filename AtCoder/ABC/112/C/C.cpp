#include <bits/stdc++.h>
using namespace std;

struct info {
  int x;
  int y;
  int h;
};
bool cmp_info(const info &i1, const info &i2) { return i1.h > i2.h; }

int main() {
  int n;
  cin >> n;
  info in[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> in[i].x >> in[i].y >> in[i].h;
  }
  sort(in, in+n, cmp_info);

  int X, Y, H = -1;
  bool f = false;
  for ( X = 0; X <= 100; X++ ) {
    for ( Y = 0; Y <= 100; Y++ ) {
      H = abs(X-in[0].x) + abs(Y-in[0].y) + in[0].h;
      for ( int i = 1; i < n; i++ ) {
        if ( in[i].h != max(H - abs(X-in[i].x) - abs(Y-in[i].y), 0) ) {
          H = -1;
          break;
        }
      }
      if ( H != -1 ) { f = true; break; }
    }
    if ( f ) { break; }
  }

  cout << X << ' ' << Y << ' ' << H << endl;
  return 0;
}
