#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0;
  for ( int m = 1; m <= 12; m++ ) {
    for (int d = 1; d <= 31; d++) {
      int tmp10 = d/10;
      int tmp1  = d - tmp10;
      ans += ( m = tmp10+tmp1 ) ? 1 : 0;
    }
  }
  cout << ans-1 << endl;  // 04/31を除く
  return 0;
}