#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m;
  long long sum = 0;
  cin >> n >> m;
  int a[n], b[m], c[m];
  bool ch[m];
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
  }
  for ( int i = 0; i < m; i++ ) {
    cin >> b[i] >> c[i];
    ch[i] = true;
  }
  sort(a, a + n);
 
  bool flag = true;
  int an = 0;
  while ( flag ) {
    int max = 0, p = 0;
    for ( int i = 0; i < m; i++ ) {
      if ( max <= c[i] && ch[i] ) {
        p = i;
        max = c[i];
      }
    }
    ch[p] = false;
    for ( int i = 0 ; i < b[p]; i++ ) {
      if ( a[an] >= max ) {
        flag = false;
        break;
      }
      a[an++] = max;
      if ( an >= n ) {
        flag = false;
        break;
      }
    }
  }
 
  for ( int i = 0; i < n; i++) {
    sum += a[i];
  }
  
  cout << sum << endl;
  return 0;
}