#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long k;
  cin >> n >> k;
  int a[n];
  int visited[n];


  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
    a[i]--;
    visited[i] = -1;
  }

  int sp = 0;
  int len = 0;
  int loop;
  while ( true ) {
    if ( visited[sp] != -1 ) { loop = len - visited[sp]; break; }
    visited[sp] = len;
    sp = a[sp];
    len++;
    k--;
    if ( k == 0 ) { break; }
  }

  if ( k != 0 ) {
    long long rem = k % loop;
    while ( rem-- > 0 ) { sp = a[sp]; }
  }

  cout << sp+1 << endl;;
  return 0;
}
