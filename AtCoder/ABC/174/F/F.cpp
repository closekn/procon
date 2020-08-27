#include <bits/stdc++.h>
using namespace std;

struct FenwickTree {
  vector<int> bit;
  int siz;

  FenwickTree(int N) : bit(N) {
    siz = N;
    for ( int i = 0; i < siz; i++ ) { bit[i] = 0; }
  }

  void add(int i, int x) {
    for ( ; i < siz; i += i&-i ) { bit[i] += x; }
  }

  int sum(int i) {
    int sm = 0;
    for ( ; i > 0; i -= i&-i ) { sm += bit[i]; }
    return sm;
  }

  int range_sum(int l, int r) {
    return sum(r) - sum(l-1);
  }
};

struct query {
  int id;
  int l;
  int r;
};
bool operator < (const query &a, const query &b) { return a.r < b.r; }

int main() {
  int n, q;
  cin >> n >> q;
  int c[n+1];
  for ( int i = 1; i <= n; i++ ) { cin >> c[i]; }
  query qs[q];
  for ( int i = 0; i < q; i++ ) {
    int l, r;
    cin >> l >> r;
    qs[i] = {i, l, r};
  }
  sort(qs, qs+q);

  FenwickTree FT(n+1);
  int right_pos[n+1];
  for ( int i = 1; i <= n; i++ ) { right_pos[i] = 0; }
  int ans[q];
  int now_q = 0;
  for ( int i = 1; i <= n; i++ ) {
    if ( right_pos[c[i]] > 0 ) { FT.add(right_pos[c[i]], -1); }
    FT.add(i, 1);
    right_pos[c[i]] = i;
    while ( now_q < q && qs[now_q].r == i ) {
      ans[qs[now_q].id] = FT.range_sum(qs[now_q].l, qs[now_q].r);
      now_q++;
    }
  }

  for ( int i = 0; i < q; i++ ) {
    cout << ans[i] << endl;
  }
  return 0;
}
