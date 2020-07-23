#include <bits/stdc++.h>
using namespace std;

bool need_mizuyari(int h[], int n) {
  for ( int i = 0; i < n; i++ ) {
    if ( h[i] > 0 ) { return true; }
  }
  return false;
}

int main() {
  int n;
  cin >> n;
  int h[n];
  for ( int i = 0; i < n; i++ ) { cin >> h[i]; }

  int ans = 0;
  while ( need_mizuyari(h, n) ) {
    bool mizuyari = false;
    for ( int i = 0; i < n; i++ ) {
      if ( h[i] == 0 ) {
        if ( mizuyari ) { ans++; }
        mizuyari = false;
      } else {
        h[i]--;
        mizuyari = true;
      }
    }
    if ( mizuyari ) { ans++; }
  }

  cout << ans << endl;
  return 0;
}
