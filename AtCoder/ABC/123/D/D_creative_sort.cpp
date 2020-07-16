#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, z, k;
  cin >> x >> y >> z >> k;
  long long a[x], b[y], c[z];
  for ( int i = 0; i < x; i++ ) { cin >> a[i]; }
  for ( int i = 0; i < y; i++ ) { cin >> b[i]; }
  for ( int i = 0; i < z; i++ ) { cin >> c[i]; }
  sort(a, a+x, greater<long long>());
  sort(b, b+y, greater<long long>());
  sort(c, c+z, greater<long long>());

  vector<long long> e;
  for ( int i = 0; i < x; i++ ) {
    for ( int j = 0; j < y; j++ ) {
      e.push_back(a[i]+b[j]);
    }
  }
  sort(e.begin(), e.end(), greater<long long>());

  vector<long long> ans;
  for ( int i = 0; i < k && i < e.size(); i++ ) {
    for ( int j = 0; j < z; j++ ) {
      ans.push_back(e[i]+c[j]);
    }
  }
  sort(ans.begin(), ans.end(), greater<long long>());

  for ( int i = 0; i < k; i++ ) {
    cout << ans[i] << endl;
  }
  return 0;
}