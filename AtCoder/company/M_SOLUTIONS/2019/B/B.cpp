#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int k = s.length(), ch = 0;
  for ( int i = 0; i < k; i++ ) {
    if ( s[i] == 'o' ) { ch++; }
  }
  if ( (15-k)+ch >= 8 ) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}