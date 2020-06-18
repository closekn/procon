#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  bool takahashi_tarn = true;
  while ( a > 0 && c > 0 ) {
    if ( takahashi_tarn ) {
      c -= b;
    } else {
      a -= d;
    }
    takahashi_tarn = ! takahashi_tarn;
  }
  string ans = ( c <= 0 ) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
