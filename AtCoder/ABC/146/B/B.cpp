#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  for ( int i = 0; i < s.size(); i++ ) {
    char c = 'A' + (s[i]-'A'+n)%26;
    cout << c;
  }
  cout << endl;
  return 0;
}
