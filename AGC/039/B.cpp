#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int> > s;

bool ch_all(vector<bool> ch) {
  for ( int i = 0; i < n; i++ ) {
    if ( !ch[i] ) { return false; }
  }
  return true;
}

bool in_check(vector<vector<int> > v, int p, int num) {
  for ( int i = 0; i < v[p].size(); i++ ) {
    if ( v[p][i] == num ) { return true; }
  }
  return false;
}

int dfs(vector<vector<int> > bv, vector<bool> bch, int p, int num) {
  vector<vector<int> > v(bv);
  vector<bool> ch(bch);

  for ( int j = 0; j < n; j++ ) {
    if ( num == j ) { continue; }
    if ( s[num][j] == 1 ) {
      if ( ch[j] ) {
        if ( !(in_check(v, p-1, j) || in_check(v, p+1, j)) ) { return -1; }
      } else {
        ch[j] = true;
        v[p-1].push_back(j);
        dfs(v, ch, p-1, j);
        v[p-1].push_ba
        dfs(v, ch, p+1, j);
      }
    } else {

    }
  }

  if ( ch_all(ch) ) {

  }

}

int main() {
  cin >> n;
  vector<bool> ch;
  for ( int i = 0; i < n; i++ ) {
    string tmp;
    cin >> tmp;
    vector<int> tv;
    for ( int j = 0; j < n; j++ ) {
      int tn = ( tmp[i] == 0 ) ? 0 : 1;
      tv.push_back(tn);
    }
    s.push_back(tv);
    ch.push_back(false);
  }

  vector<vector<int> > v;
  vector<int> t;
  t.push_back(0);
  v.push_back(t);
  ch[0] = true;

  dfs(v, ch, 0, 0);

  return 0;
}
