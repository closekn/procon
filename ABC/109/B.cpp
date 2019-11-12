#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string w[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> w[i];
  }

  string ans = "Yes";
  for ( int i = 1; i < n; i++ ) {
    for ( int j = i-1; j >= 0; j-- ) {
      if ( w[i] == w[j] ) { ans = "No"; }
    }
  }
  for ( int i = 1; i < n; i++ ) {
    if ( w[i][0] != w[i-1][w[i-1].length()-1] ) { ans = "No"; }
  }

  cout << ans << endl;
  return 0;
}
