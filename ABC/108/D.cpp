#include <bits/stdc++.h>
using namespace std;

struct edge {
  int from;
  int to;
  int len;
};

int main() {
  int l;
  cin >> l;
  int r = 0;
  for ( int i = 1; i*2 <= l; i*=2 ) { r++; }
  int r2 = 1 << r;
  if ( r > 19 ) { r = 19; }

  int n = r+1;
  vector<edge> es;
  for ( int i = 1; i < n; i++ ) {
    edge t;
    t.from = i;
    t.to = i+1;
    t.len = 0;
    es.push_back(t);
    t.len = 1 << (i-1);
    es.push_back(t);
  }

  for ( int i = n-1; i >= 1; i-- ) {
    int s = l - (1 << (i-1));
    if ( s < r2 ) { continue; }
    edge t;
    t.from = i;
    t.to = n;
    t.len = s;
    es.push_back(t);
    l = s;
  }

  cout << n << ' ' << es.size() << endl;
  for ( int k = 0; k < es.size(); k++ ) {
    cout << es[k].from << ' ' << es[k].to << ' ' << es[k].len << endl;
  } 
  return 0;
}
