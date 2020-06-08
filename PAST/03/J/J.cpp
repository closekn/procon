#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int y[n];
  for ( int i = 0; i < n; i++ ) { y[i] = -1;  }

  while ( m-- > 0 ) {
    int a;
    cin >> a;
    bool eat = false;
    for ( int i = 0; i < n; i++ ) {
      if ( a > y[i] ) {
        eat = true;
        y[i] = a;
        cout << i+1 << endl;
        break;
      }
    }
    if ( ! eat ) { cout << -1 << endl; }
  }

  return 0;
}
