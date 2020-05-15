#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[5];
  for ( int i = 0; i < 5; i++ ) { cin >> a[i]; }
  
  int mi = 10;
  int ct = 0;
  for ( int i = 0; i < 5; i++ ) {
    ct += ceil(a[i] / 10.0) * 10;
    if ( a[i] % 10 != 0 ) { mi = min(mi, a[i] % 10); }
  }

  cout << ct+mi-10 << endl;
  return 0;
}
