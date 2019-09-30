#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int k[n];
  vector<vector<int> > a;
  for ( int i = 0; i < n; i++ ) {
    cin >> k[i];
    vector<int> tmp;
    for ( int j = 0; j < k[i]; j++ ) {
      int t;
      cin >> t;
      tmp.push_back(t);
    }
    a.push_back(tmp);
  }

  int ch[m];
  for ( int i = 0; i < m; i++ ) { ch[i] = 0; }
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < k[i]; j++ ) {
      ch[a[i][j]-1]++;
    }
  }

  int ans = 0;
  for ( int i = 0; i < m; i++ ) {
    if ( ch[i] == n ) { ans++; }
  }

  cout << ans << endl;
  return 0;
}
