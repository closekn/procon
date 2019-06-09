#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  string s;
  cin >> s;
  a = b = 0;

  for ( int i = 0; i < s.size(); i++ ) {
    int x = s[i] - '0';
    a += (x + i) % 2;
    b += (x + i + 1) % 2;
  } 

  cout << min(a, b) << endl;
  return 0;
}