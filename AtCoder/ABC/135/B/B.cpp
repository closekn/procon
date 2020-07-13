#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int miss = 0;
  for ( int i = 1; i <= n; i++ ) {
    int p;
    cin >> p;
    if ( p != i ) { miss++; }
  }

  string ans = ( miss <= 2 ) ? "YES" : "NO";
  cout << ans << endl;
  return 0;
}
