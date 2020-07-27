#include <bits/stdc++.h>
using namespace std;

struct change {
  int b;
  long long c;
};
bool operator < (const change &l, const change &r) { return l.c < r.c; }
bool operator > (const change &l, const change &r) { return l.c > r.c; }
 
int main() {
  int n, m;
  cin >> n >> m;
  long long a[n];
  change st[m];
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }
  for ( int i = 0; i < m; i++ ) { cin >> st[i].b >> st[i].c; }
  sort(a, a+n);
  sort(st, st+m, greater<change>());
  
  long long ans = 0;
  int cur = 0;
  for ( int k = 0; k < m && cur < n; k++ ) {
    if ( cur+st[k].b-1 >= n && a[n-1] < st[k].c ) {
      ans += st[k].c * (n-cur);
      cur = n;
    } else if ( cur+st[k].b-1 < n && a[cur+st[k].b-1] < st[k].c ) {
      ans += st[k].c * st[k].b;
      cur += st[k].b;
    } else if ( a[cur] < st[k].c ) {
      while ( a[cur] < st[k].c && st[k].b > 0 ) {
        ans += st[k].c;
        cur++;
        st[k].b--;
        if ( cur >= n ) { break; }
      }
    } else {
      break;
    }
  }
  for ( int i = cur; i < n; i++ ) { ans += a[i]; }

  cout << ans << endl;
  return 0;
}