#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

const int N_MAX = 300000;

int op(int a, int b) { return max(a, b); }
int e() { return 0; }

int main() {
  segtree<int, op, e> seg(N_MAX+5);

  int n, k;
  cin >> n >> k;

  int ans = 0;
  for ( int i = 0; i < n; i++ ) {
    int a;
    cin >> a;

    int l = max(a-k, 0);
    int r = min(a+k, N_MAX);
    int t = seg.prod(l, r+1) + 1;

    ans = max(ans, t);
    seg.set(a, t);
  }

  cout << ans << endl;
  return 0;
}
