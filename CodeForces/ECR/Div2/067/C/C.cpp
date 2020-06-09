#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> l0, l1, r0, r1;
  int m0 = 0, m1 = 0;
  int ch[n+1], a[n+1];  // ch[i] = 1 : a[i] <= a[i+1], ch[i] = 0 : a[i] > a[i+1]
  for ( int i = 0; i < n+1; i++ ) { ch[i] = -1; a[i] = 1; }
  string ans = "YES";
  for ( int i = 0; i < m; i++ ) {
    int tmpt, tmpl, tmpr;
    cin >> tmpt >> tmpl >> tmpr;
    if ( tmpt == 1 ) {
      l1.push_back(tmpl);
      r1.push_back(tmpr);
      m1++;
    } else {
      l0.push_back(tmpl);
      r0.push_back(tmpr);
      m0++;
    }  
  }

  for ( int i = 0; i < m1; i++ ) {
    for ( int k = l1[i]; k < r1[i]; k++ ) { ch[k] = 1; }
  }
  for ( int i = 0; i < m0; i++ ) {
    bool can = false;
    for ( int k = l0[i]; k < r0[i]; k++ ) {
      if ( ch[k] == 1 ) { continue; }
      can = true;
      ch[k] = 0;
    }
    if ( ! can ) { ans = "NO"; break; }
  }

  cout << ans << endl;
  if ( ans == "YES" ) {
    for ( int i = n-1; i > 0; i-- ) {
      if ( ch[i] == 0 ) { a[i] = a[i+1] + 1; }
    }
    for ( int i = 1; i < n; i++ ) {
      cout << a[i] << ' ';
    }
    cout << a[n] << endl;
  } 
  return 0;
}