#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  long long x[m], len[m-1];
  for ( int i = 0; i < m; i++ ) { cin >> x[i]; }
  sort(x, x+m);
  for ( int i = 0; i < m-1; i++ ) {
    len[i] = x[i+1] - x[i];
  }
  sort(len, len+m-1, greater<int>());

  long long ans = 0;
  if ( n < m ) {
    long long not_visit = 0;
    for ( int i = 0; i < n-1; i++ ) {
      not_visit += len[i];
    }
    ans = (x[m-1]-x[0]) - not_visit;
  }
  cout << ans << endl;
  return 0;
}
