#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int mn = 1000;
  for ( int i = 0; i+2 < s.length(); i++ ) {
    if ( abs(stoi(s.substr(i, 3))-753) < mn ) { mn = abs(stoi(s.substr(i, 3))-753); }
  }
  cout << mn << endl;
  return 0;
}
