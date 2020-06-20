#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;

  long long r = 0;
  long long g = 0;
  long long b = 0;
  for ( int i = 0; i < n; i++ ) {
    if ( s[i] == 'R' ) { r++; }
    if ( s[i] == 'G' ) { g++; }
    if ( s[i] == 'B' ) { b++; }
  }

  long long ans = r * g * b;
  for ( int i = 0; i < n-2; i++ ) {
    for ( int j = i+1; j < n-1; j++ ) {
      int k = 2*j - i;
      if ( k >= n ) { continue; }
      if ( s[i] != s[j] && s[j] != s[k] && s[k] != s[i] ) { ans--; }
    }
  }
  ans = ( ans < 0 ) ? 0 : ans;

  cout << ans << endl;
  return 0;
}
