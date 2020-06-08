#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<vector<int>> a;
  for ( int i = 0; i < n; i++ ) {
    vector<int> t;
    a.push_back(t);
    for ( int j = 0; j < n; j++ ) {
      a[i].push_back(n * i + j);
    }
  }

  while ( q-- > 0 ) {
    int mode;
    cin >> mode;
    if ( mode == 3 ) {
      for ( int i = 0; i < n; i++ ) {
        for ( int j = i+1; j < n; j++ ) {
          swap(a[i][j], a[j][i]);
        }
      }
      continue;
    }
    int A, B;
    cin >> A >> B;
    A--; B--;
    if ( mode == 4 ) { cout << a[A][B] << endl; }
    if ( A == B ) { continue; }
    if ( mode == 1 ) {
      for ( int j = 0; j < n; j++ ) {
        swap(a[A][j], a[B][j]);
      }
    }
    if ( mode == 2 ) {
      for ( int i = 0; i < n; i++ ) {
        swap(a[i][A], a[i][B]);
      }
    }
  }

  return 0;
}
