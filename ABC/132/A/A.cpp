#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int alp[26];
  int two = 0;
  for ( int i = 0; i < 26; i++ ) { alp[i] = 0; }
  for ( int i = 0; i < 4; i++ ) {
    int t = s[i]-'A';
    alp[t]++;
    if ( alp[t] == 2 ) { two++; }
  }
  string ans = ( two == 2 ) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}