#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while ( 1 ) {
    int t = n;
    int ch = 0;
    while ( t > 0 ) {
      ch += t%10;
      t /= 10;
    }
    ch = ch % 4;
    if ( ch == 0 ) { break; }
    n += 4-ch;
  }
  cout << n << endl;
  return 0;
}