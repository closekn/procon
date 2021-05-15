#include <bits/stdc++.h>
using namespace std;

int main() {
  int num[10];

  string s;
  cin >> s;
  for ( int i = 0; i < 10; i++ ) {
    if ( s[i] == 'o' ) { num[i] = 0; }
    if ( s[i] == '?' ) { num[i] = 1; }
    if ( s[i] == 'x' ) { num[i] = 2; }
  }

  int ans = 0;

  for ( int a = 0; a < 10; a++ ) {
    for ( int b = 0; b < 10; b++ ) {
      for ( int c = 0; c < 10; c++ ) {
        for ( int d = 0; d < 10; d++ ) {
          bool ok = true;
          for ( int n = 0; n < 10; n++ ) {
            if ( num[n] == 0 ) {
              if ( a != n && b != n && c != n && d != n ) { ok = false; break; }
            }
            if ( num[n] == 2 ) {
              if ( a == n || b == n || c == n || d == n ) { ok = false; break; }
            }
          }
          if ( ok ) { ans++; }
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
