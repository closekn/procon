#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  int a, b;
  string u;
  cin >> s >> t;
  cin >> a >> b;
  cin >> u;
  if ( s == u ) { a--; } else { b--; }
  cout << a << ' ' << b << endl;
  return 0;
}
