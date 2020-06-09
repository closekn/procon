#include <bits/stdc++.h>
using namespace std;

// 部分列列挙だった omg! 
// あとで直す

bool same_check(vector<string> f, int n, string s) {
  bool ret = false;
  for ( int i = 0; i < n; i++ ) {
    if ( f[i] == s ) { ret = true; break; }
  }
  return ret;
}

int main() {
  int n, k;
  string s;
  cin >> n >> k;
  cin >> s;
  vector<string> f;
  vector<int> c;
  f.push_back(s);
  c.push_back(0);
  int fnum = 1;
  int ans = 0;
  for ( int i = 0; i < fnum; i++ ) {
    for ( int j = 0; j < f[i].length(); j++ ) {
      if ( fnum >= k ) { break; }
      string tmp = f[i];
      tmp.erase(j, j+1);
      if ( ! same_check(f, fnum, tmp) ) {
        int cost = c[i]+1;
        f.push_back(tmp);
        c.push_back(cost);
        ans += cost;
        fnum++;
      } else if ( tmp == "" ) {
        break;
      }
    }
  }
  if ( fnum != k ) { ans = -1; }
  cout << ans << endl;
  return 0;
}