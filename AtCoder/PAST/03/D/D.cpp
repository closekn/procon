#include <bits/stdc++.h>
using namespace std;

int match_number( string s[] ) {
  if ( s[0] == "###" && s[1] == "#.#" && s[2] == "#.#" && s[3] == "#.#" && s[4] == "###" ) { return 0; }
  if ( s[0] == ".#." && s[1] == "##." && s[2] == ".#." && s[3] == ".#." && s[4] == "###" ) { return 1; }
  if ( s[0] == "###" && s[1] == "..#" && s[2] == "###" && s[3] == "#.." && s[4] == "###" ) { return 2; }
  if ( s[0] == "###" && s[1] == "..#" && s[2] == "###" && s[3] == "..#" && s[4] == "###" ) { return 3; }
  if ( s[0] == "#.#" && s[1] == "#.#" && s[2] == "###" && s[3] == "..#" && s[4] == "..#" ) { return 4; }
  if ( s[0] == "###" && s[1] == "#.." && s[2] == "###" && s[3] == "..#" && s[4] == "###" ) { return 5; }
  if ( s[0] == "###" && s[1] == "#.." && s[2] == "###" && s[3] == "#.#" && s[4] == "###" ) { return 6; }
  if ( s[0] == "###" && s[1] == "..#" && s[2] == "..#" && s[3] == "..#" && s[4] == "..#" ) { return 7; }
  if ( s[0] == "###" && s[1] == "#.#" && s[2] == "###" && s[3] == "#.#" && s[4] == "###" ) { return 8; }
  if ( s[0] == "###" && s[1] == "#.#" && s[2] == "###" && s[3] == "..#" && s[4] == "###" ) { return 9; }
  return -1;
}

int main() {
  int n;
  string s[5];
  cin >> n;
  for ( int i = 0; i < 5; i++ ) { cin >> s[i]; }

  for ( int i = 1; i <= n; i++ ) {
    string sub[5];
    for ( int k = 0; k < 5; k++ ) {
      sub[k] = "";
      sub[k] += s[k][4*i-3];
      sub[k] += s[k][4*i-2];
      sub[k] += s[k][4*i-1];
    }
    cout << match_number(sub);
  }

  cout << endl;
  return 0;
}
