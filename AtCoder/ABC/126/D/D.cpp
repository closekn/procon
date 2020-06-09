#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int u[n-1], v[n-1], w[n-1], a[n+1], l[n+1];
  bool ch[n+1], loop;
  for ( int i = 0; i < n-1; i++ ) {
    cin >> u[i] >> v[i] >> w[i];
  }
  for ( int i = 1; i <= n; i++ ) {
    a[i] = l[i] = 0;
    ch[i] = false;
  }

  ch[u[0]] = true;
  loop = true;
  while ( loop ) {
    for ( int i = 0; i < n-1; i++ ) {
      if ( !ch[u[i]] && !ch[v[i]] ) { continue; }
      if ( !ch[u[i]] ) {
        l[u[i]] = w[i] + l[v[i]];
        ch[u[i]] = true;
      } else if ( !ch[v[i]] ) {
        l[v[i]] = w[i] + l[u[i]];
        ch[v[i]] = true;
      }
    }
    loop = false;
    for ( int i = 1; i <= n; i++ ) {
      if ( !ch[i] ) { loop = true; }
    }
  }
  
  for ( int i = 1; i <= n; i++ ) {
    a[i] = ( l[i]%2 == 0 ) ?  0 : 1;
  }

  for ( int i = 1; i <= n; i++ ) {
    cout << a[i] << endl;
  }
  return 0;
}