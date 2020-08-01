#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int main() {
  int n, m;
  cin >> n >> m;
  long long a[n][3];
  for ( int i = 0; i < n; i++ ) {
    for ( int k = 0; k < 3; k++ ) { cin >> a[i][k]; }
  }

  long long ans = -INF;
  for ( int bit = 0; bit < 8; bit++ ) {
    vector<long long> tmp;
    for ( int i = 0; i < n; i++ ) {
      long long sm = 0;
      for ( int k = 0; k < 3; k++ ) {
        if ( bit & (1<<k) ) {
          sm += a[i][k];
        } else {
          sm -= a[i][k];
        }
      }
      tmp.push_back(sm);
    }
    sort(tmp.begin(), tmp.end(), greater<long long>());
    long long val = 0;
    for ( int i = 0; i < m; i++ ) { val += tmp[i]; }
    ans = max(ans, val);
  }

  cout << ans << endl;
  return 0;
}
