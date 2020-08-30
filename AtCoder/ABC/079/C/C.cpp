#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;

  string ans;
  for ( int bit = 0; bit < (1<<3); bit++ ) {
    ans = n[0];
    int seven = n[0]-'0';
    for ( int i = 0; i < 3; i++ ) {
      if ( bit & (1<<i) ) {
        ans += '+';
        ans += n[i+1];
        seven += n[i+1]-'0';
      } else {
        ans += '-';
        ans += n[i+1];
        seven -= n[i+1]-'0';
      }
    }
    if ( seven == 7 ) {
      ans += "=7";
      break;
    }
  }

  cout << ans << endl;
  return 0;
}
