#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, p;
  cin >> a >> b;

  p = (a > b) ? a : b;
  if ( a > b ) {
    a--;
  } else {
    b--;
  }
  p += (a > b) ? a : b;

  cout << p << endl;
  return 0;
}
