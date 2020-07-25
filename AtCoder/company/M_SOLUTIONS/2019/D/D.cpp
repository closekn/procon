#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n-1], b[n-1], c[n], d[n+1], ch[n+1];
  vector<vector<int> > p(n+1);
  for ( int i = 1; i <= n; i++ ) {
    d[i] = 0;
    ch[i] = 0;
  }
  for ( int i = 0; i < n-1; i++ ) {
    cin >> a[i] >> b[i];
    p[a[i]].push_back(b[i]);
    p[b[i]].push_back(a[i]);
    ch[a[i]]++;
    ch[b[i]]++;
  }
  for ( int i = 0; i < n; i++ ) {
    cin >> c[i];
  }
  sort(c, c+n, greater<>());

  int max = 0, point;
  vector<int> next;
  for ( int i = 1; i <= n; i++ ) {
    if ( max < ch[i] ) {
      point = i;
      max = ch[i];
    }
  }
  next.push_back(point);
  int x = 0;
  for ( int i = 0; x < n; i++ ) {
    d[next[i]] = c[x++];
    for ( int j = 0; j < ch[next[i]]; j++ ) {
      if ( d[p[next[i]][j]] == 0 ) {
        next.push_back(p[next[i]][j]);
      }
    }
  }

  int ans = 0;
  for ( int i = 0; i < n-1; i++ ) {
    ans += ( d[a[i]] > d[b[i]] ) ? d[b[i]] : d[a[i]];
  }
  cout << ans << endl;
  for ( int i = 1; i < n; i++ ) {
    cout << d[i] << " ";
  }
  cout << d[n] << endl;

  return 0;
}