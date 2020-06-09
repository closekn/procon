#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> l, r;
  for ( int i = 0; i < n; i++ ) {
    if ( s[i] == '(' ) {
      l.push_back(i);
    } else {
      r.push_back(i);
    }
  }

  int ans = 0;
  int pi, pj;
  pi = 1; pj = 1;
  if ( l.size() == r.size() ) {
    for ( int i = 0; i < l.size(); i++ ) {
      s[l[i]] = ')';
      for ( int j = 0; j < r.size(); j++ ) {
        s[r[j]] = '(';

        int v = 0;
        for ( int k = 1; k <= n; k++ ) {
          if ( s[k%n] == ')' && s[(k-1)%n] == '(' ) {
            v++;
          }
        }
        if ( v > ans ) {
          ans = v;
          pi = l[i]+1;
          pj = r[j]+1;
        }

        s[r[j]] = ')';
      }
      s[l[i]] = '(';
    }
  }

  cout << ans << endl;
  cout << pi << ' ' << pj << endl;

  return 0;
}
