#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int c[10][10];
  for ( int i = 0; i < 10; i++ ) {
    for ( int j = 0; j < 10; j++ ) {
      c[i][j] = 0;
    }
  }
  for ( int i = 1; i <= n; i++ ) {
    int hd = to_string(i)[0] - '0';
    int tl = i%10;
    c[hd][tl]++;
  }

  int ans = 0;
  for ( int i = 0; i < 10; i++ ) {
    for ( int j = 0; j < 10; j++ ) {
      ans += c[i][j]*c[j][i];
    }
  }
  cout << ans << endl;
  return 0;
}
