#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int q;
  cin >> s;
  cin >> q;

  bool rev = false;
  string left = "";
  string right = "";

  while ( q-- > 0 ) {
    int t;
    cin >> t;
    if ( t == 1 ) {
      rev = !rev;
    }
    if ( t == 2 ) {
      int f;
      string c;
      cin >> f >> c;
      if ( f == 1 ) {
        if ( rev ) {
          right += c;
        } else {
          left += c;
        }
      }
      if ( f == 2 ) {
        if ( rev ) {
          left += c;
        } else {
          right += c;
        }
      }
    }
  }

  if ( !rev ) {
    reverse(left.begin(), left.end());
    s = left + s + right;
  } else {
    reverse(s.begin(), s.end());
    reverse(right.begin(), right.end());
    s = right + s + left;
  }
  cout << s << endl;
  return 0;
}
