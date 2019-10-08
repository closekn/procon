#include <bits/stdc++.h>
using namespace std;

int N;
char c753[3] = {'3', '5', '7'};

int dfs(string s) {
  if ( s != "" ) { if ( s.length() > 9 || stoi(s) > N ) { return 0; } }

  int ct = 1;
  for ( int i = 0; i < 3; i++ ) {
    bool non753 = true;
    for ( int c = 0; c < s.length(); c++ ) {
      if ( c753[i] == s[c] ) { non753 = false; break; }
    }
    if ( non753 ) { ct--; break; }
  }

  for ( int i = 0; i < 3; i++ ) {
    ct += dfs(s + c753[i]);
  }

  return ct;
}

int main() {
  int n;
  cin >> n;
  N = n;
  cout << dfs("") << endl;
  return 0;
}
