#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  bool trans = false;
  long long line[n];
  long long row[n];
  for ( int i = 0; i < n; i++ ) {
    line[i] = i;
    row[i] = i;
  }

  while ( q-- > 0 ) {
    int mode;
    cin >> mode;
    if ( mode == 3 ) {
      trans = !trans;
      continue;
    }
    int A, B;
    cin >> A >> B;
    A--; B--;
    if ( mode == 4 ) {
      long long ans = ( !trans ) ? n * line[A] + row[B] : n * line[B] + row[A];
      cout << ans << endl;
    }
    if ( A == B ) { continue; }
    if ( mode == 1 ) {
      if ( !trans ) { swap(line[A], line[B]); } else { swap(row[A], row[B]); }
    }
    if ( mode == 2 ) {
      if ( !trans ) { swap(row[A], row[B]); } else { swap(line[A], line[B]); }
    }
  }

  return 0;
}
