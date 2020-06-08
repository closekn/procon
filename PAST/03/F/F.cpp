#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  char a[n][n];
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      cin >> a[i][j];
    }
  }

  string front = "";
  string back = "";
  string cent = "";
  char same = '#';
  for ( int i = 0; i < n/2; i++ ) {
    same = '#';
    for ( int k = 0; k < n; k++ ) {
      for ( int l = 0; l < n; l++ ) {
        if ( a[i][k] == a[n-i-1][l] ) { same = a[i][k]; break; }
      }
      if ( same != '#' ) { break; }
    }
    if ( same == '#' ) { cout << -1 << endl; return 0; }
    front = front + same;
    back = same + back;
  }

  if ( n%2 == 1 ) { cent = a[(n/2)][0]; }

  cout << front + cent + back << endl;
  return 0;
}
