#include <bits/stdc++.h>
using namespace std;

const int MAX_Q = 51;
int n, m, q;
int a[MAX_Q], b[MAX_Q], c[MAX_Q], d[MAX_Q];

int ans = 0;
 
void all_search(vector <int> &v, int dep) {
  if ( dep > n ) {
    int sum = 0;
    for ( int k = 0; k < q; k++ ) {
      if ( v[b[k]] - v[a[k]] == c[k] ) { sum += d[k]; }
    }
    ans = ( sum > ans ) ? sum : ans;
    return;
  }

  for(int k = v[dep - 1]; k <= m; k++) {
    v[dep] = k;
    all_search(v, dep+1);
  }
}
 
int main() {
  cin >> n >> m >> q;
  for ( int i = 0; i < q; i++ ) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }

  vector <int> v(n+1, 1);
  all_search(v, 1);

  cout << ans << endl;
  return 0;
}