#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), sorted(n);
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
    sorted[i] = a[i];
  }
  sort(sorted.begin(), sorted.end());

  for ( int i = 0; i < n; i++ ) {
    int ans = ( a[i] != sorted[n-1] ) ? sorted[n-1] : sorted[n-2];
    cout << ans << endl;
  }
  return 0;
}
