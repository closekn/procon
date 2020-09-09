#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int, int> &l, const pair<int, int> &r) { return l.second < r.second; }

int main() {
  int n;
  cin >> n;
  pair<int, int> xs[n];
  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    xs[i] = {i, x};
  }
  sort(xs, xs+n, comp);
  
  int ans[n];
  int i = 0;
  for ( ; i < n/2; i++ ) { ans[xs[i].first] = xs[n/2].second; }
  for ( ; i < n; i++ ) { ans[xs[i].first] = xs[n/2-1].second; }

  for ( int i = 0; i < n; i++ ) {
    cout << ans[i] << endl;;
  }
  return 0;
}
