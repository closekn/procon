#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  for ( int i = a; i <= b; i++ ){
    if ( i % 3 == 0 ) { cout << i << endl; continue; }
    int t = i;
    while ( t > 0 ) {
      if ( t%10 == 3 ) { cout << i << endl; break; }
      t /= 10;
    }
  }
  return 0;
}