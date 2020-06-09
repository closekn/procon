#include <bits/stdc++.h>
using namespace std;

struct arr {
  int num;
  int pos;
};

int func(int x) { return -1*x - 1; }
bool cmp(const arr &a, const arr &b) { return a.num < b.num; } 

int main() {
  int n;
  cin >> n;
  int a[n];
  vector<arr> p, m;
  int pn = 0, mn = 0;
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
    if ( a[i] == 0 ) { a[i] = -1; }
    arr t = {a[i], i};
    if ( a[i] > 0 ) {
      p.push_back(t);
      pn++;
    } else {
      m.push_back(t);
      mn++;
    }
  }
  if ( pn == 0 ) {
    if ( mn == 1 ) {
      a[0] = func(a[0]);
    } else if ( mn%2 == 1 ) {
      sort(m.begin(), m.end(), cmp);
      bool m1 = true;
      for ( int i = 0; i < mn; i++ ) {
        if ( m[i].num != -1 ) { a[m[i].pos] = func(a[m[i].pos]); m1 = false; break; }
      }
      if ( m1 ) { a[m[0].pos] = func(a[m[0].pos]); }
    }
  } else {
    int k = 0;
    sort(p.begin(), p.end(), cmp);
    if ( mn%2 == 1 ) { a[p[k].pos] = func(a[p[k].pos]); k++; }
    while ( pn-k >= 2 ) {
      a[p[k].pos] = func(a[p[k].pos]); k++;
      a[p[k].pos] = func(a[p[k].pos]); k++;
    }
  }
  
  for ( int i = 0; i < n-1; i++ ) { cout << a[i] << ' '; }
  cout << a[n-1] << endl;
  return 0;
}