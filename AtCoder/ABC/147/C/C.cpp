#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> evi[n];
  for ( int i = 0; i < n; i++ ) {
    vector<int> e(n, -1);
    evi[i] = e;
    int k;
    cin >> k;
    while ( k-- > 0 ) {
      int human, kind;
      cin >> human >> kind;
      human--;
      evi[i][human] = kind;
    }
  }

  int ans = 0;
  for ( int bit = 0; bit < (1<<n); bit++ ) {
    int trust = 0;
    bool establish = true;
    for ( int i = 0; i < n; i++ ) {
      if ( bit & (1<<i) ) {
        trust++;
        for ( int k = 0; k < n; k++ ) {
          if ( evi[i][k] == -1 ) { continue; }
          int kind = ( bit & (1<<k) ) ? 1 : 0;
          if ( evi[i][k] != kind ) { establish = false; }
        }
      }
      if ( !establish ) { break; }
    }
    if ( establish ) { ans = max(trust, ans); }
  }

  cout << ans << endl;
  return 0;
}
