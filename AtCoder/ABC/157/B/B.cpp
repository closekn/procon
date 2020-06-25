#include <bits/stdc++.h>
using namespace std;

bool is_open(set<int> called, int number) {
  return called.find(number) != called.end();
}

int main() {
  int a[3][3];
  for ( int i = 0; i < 3; i++ ) {
    for ( int j = 0; j < 3; j++ ) {
      cin >> a[i][j];
    }
  }
  int n;
  set<int> called;
  cin >> n;
  while ( n-- > 0 ) {
    int b;
    cin >> b;
    called.insert(b);
  }

  string bingo = "No";
  for ( int i = 0; i < 3; i++ ) {
    if ( is_open(called, a[i][0]) && is_open(called, a[i][1]) && is_open(called, a[i][2]) ) { bingo = "Yes"; }
  }
  for ( int j = 0; j < 3; j++ ) {
    if ( is_open(called, a[0][j]) && is_open(called, a[1][j]) && is_open(called, a[2][j]) ) { bingo = "Yes"; }
  }
  if ( is_open(called, a[0][0]) && is_open(called, a[1][1]) && is_open(called, a[2][2]) ) { bingo = "Yes"; }
  if ( is_open(called, a[0][2]) && is_open(called, a[1][1]) && is_open(called, a[2][0]) ) { bingo = "Yes"; }

  cout << bingo << endl;
  return 0;
}
