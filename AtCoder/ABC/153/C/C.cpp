#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  long long h[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> h[i];
  }
  sort(h, h+n);

  long long ans = 0;
  for ( int i = 0; i < n-k; i++ ) {
    ans += h[i];
  }

  cout << ans << endl;
  return 0;
}
