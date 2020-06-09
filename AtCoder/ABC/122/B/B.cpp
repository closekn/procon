#include <bits/stdc++.h>
using namespace std;

bool isACGT(char c) {
  if ( c == 'A' || c == 'C' || c == 'G' || c == 'T' ) { return true; }
  return false;
}

int main() {
  string s;
  cin >> s;

  int len = 0;
  int mx = 0;
  for ( int i = 0; i < s.length(); i++ ) {
    len = ( isACGT(s[i]) ) ? len+1 : 0;
    if ( mx < len ) { mx = len; }
  }

  cout << mx << endl;
  return 0;
}
