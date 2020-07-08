#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  string ans = ( n%2 == 0 ) ? "Yes" : "No";
  int half = n/2;
  for ( int i = 0; i < half; i++ ) {
    if ( s[i] != s[i+half] ) { ans = "No"; }
  }
  cout << ans << endl;
  return 0;
}
