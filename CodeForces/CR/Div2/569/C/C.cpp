#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a;
  long long m[q];
  int max = -1, pos = -1;
  for ( int i = 0; i < n; i++ ) {
    int t;
    cin >> t;
    a.push_back(t);
    if ( t > max ) {
      max = t;
      pos = i;
    }
  }
  for ( int j = 0; j < q; j++ ) { cin >> m[j]; }

  for ( int j = 0; j < q; j++ ) {
    for ( int i = 0; i < pos && i < m[j]-1; i++ ) {
      int ta, tb;
      ta = ( a[0] > a[1] ) ? a[0] : a[1];
      tb = ( a[0] < a[1] ) ? a[0] : a[1];
      a.erase(a.begin());
      a.erase(a.begin());
      a.insert(a.begin(), ta);
      a.push_back(tb);
    }
    if ( m[j] <= pos ) { cout << a[0] << ' ' << a[1] << endl; continue; }
    int ans = (m[j]-pos)%(n-1);
    if ( ans-1 == 0 ) { ans = n; }
    cout << max << ' ' << a[ans-1] << endl;
  }
  return 0;
}