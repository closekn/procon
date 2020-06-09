#include <bits/stdc++.h>
using namespace std;

int main() {
  int query;
  cin >> query;

  for ( int q = 0; q < query; q++ ) {
    int n;
    cin >> n;
    int a[n], b[n], an[n+1], bn[n+1];
    bool can = true;
    for ( int i = 1; i <= n; i++ ) { an[i] = bn[i] = 0; }
    for ( int i = 0; i < n; i++ ) { cin >> a[i]; an[a[i]]++; }
    for ( int i = 0; i < n; i++ ) { cin >> b[i]; bn[b[i]]++; }
    for ( int i = 1; i <= n; i++ ) {
      if ( an[i] != b[i] ) { can = false;  break; }
    }
    if ( ! can ) { cout << "NO" << endl; continue; }


  }

  return 0;
}