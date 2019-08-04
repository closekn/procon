#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  bool RL[n];
  int ans[n];
  for ( int i = 0; i < n; i++ ) {
    RL[i] = false;
    ans[i] = 0;
  }

  bool R = true;
  for ( int i = 1; i < n; i++ ) {
    if ( s[i] == 'R' ) { R = true; }
    if ( s[i] == 'L' ) {
      if ( R ) { RL[i] = RL[i-1] = true; }
      R = false;
    }
  }
  R = true;
  int Lpos;
  int num = 0;;
  for ( int i = 0; i < n; i++ ) {
    if ( R ) {
      num++;
      if ( RL[i] ) {
        if ( num%2 == 0 ) {
          ans[i] += num/2;
          ans[i+1] += num/2;
        } else {
          ans[i] += num/2 + 1;
          ans[i+1] += num/2;
        }
        num = 0;
        R = false;
        Lpos = i+1;
      }
    } else {
      num++;
      if ( i == n-1 || s[i+1] == 'R' ) {
        if ( num%2 == 0 ) {
          ans[Lpos] += num/2;
          ans[Lpos-1] += num/2;
        } else {
          ans[Lpos] += num/2 + 1;
          ans[Lpos-1] += num/2;
        }
        num = 0;
        R = true;
      }
    }
  }

  for ( int i = 0; i < n-1; i++ ) { cout << ans[i] << ' '; }
  cout << ans[n-1] << endl;

  return 0;
}
