#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s, t;
  cin >> n;
  cin >> s >> t;
  for ( int i = 0; i < n; i++ ) {
    cout << s[i] << t[i];
  }
  cout << endl;
  return 0;
}
