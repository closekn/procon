#include <bits/stdc++.h>
using namespace std;

bool next_check(bool next[], int n) {
  for ( int i = 0; i < n; i++ ) {
    if ( next[i] ) { return true; }
  }
  return false;
}

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  int ans[n];
  bool emp[n]; for ( int i = 0; i < n; i++ ) { emp[i] = true; }
  bool next[n]; for ( int i = 0; i < n; i++ ) { next[i] = true; }

  bool next_flag = true;
  for ( int i = 0; i < n; i++ ) {
    if ( next_flag ) { next_flag = next_check(next, n); }
    if ( s[i] == 'L' ) {
      for ( int k = 0; k < n; k++ ) {
        if ( next_flag && !next[k] ) { continue; }
        if ( !emp[k] ) { continue; }
        ans[i] = k;
        emp[k] = false;
        next[k] = false;
        if ( k != 0 ) { next[k-1] = false; }
        if ( k != n-1 ) { next[k+1] = false; }
        break;
      }
    } else {
      for ( int k = n-1; k >= 0; k-- ) {
        if ( next_flag && !next[k] ) { continue; }
        if ( !emp[k] ) { continue; }
        ans[i] = k;
        emp[k] = false;
        next[k] = false;
        if ( k != 0 ) { next[k-1] = false; }
        if ( k != n-1 ) { next[k+1] = false; }
        break;
      }
    }
  }

  for ( int i = 0; i < n; i++ ) {
    cout << ans[i]+1 << endl;
  }
  return 0;
}
