#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

int main() {
  int n;
  cin >> n;
  int x[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> x[i];
  }

  int ans = INF;
  for ( int p = 1; p <= 100; p++ ) {
    int sum = 0;
    for ( int i = 0; i < n; i++ ) {
      sum += (x[i]-p)*(x[i]-p);
    }
    ans = min(sum, ans);
  }

  cout << ans << endl;
  return 0;
}
