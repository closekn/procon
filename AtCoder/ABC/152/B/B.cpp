#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if ( a > b ) { swap(a, b); }
  while ( b-- > 0 ) {
    cout << a;
  }
  cout << endl;
  return 0;
}
