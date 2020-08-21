#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  int q;
  cin >> q;

  set<int> pos[26];
  for ( int i = 0; i < n; i++ ) {
    pos[s[i]-'a'].insert(i);
  }

  while ( q-- > 0 ) {
    int type;
    cin >> type;
    if ( type == 1 ) {
      int i;
      char c;
      cin >> i >> c;
      i--;
      pos[s[i]-'a'].erase(i);
      pos[c-'a'].insert(i);
      s[i] = c;
    }
    if ( type == 2 ) {
      int l, r;
      cin >> l >> r;
      l--;
      r--;
      int kind = 0;
      for ( int i = 0; i < 26; i++ ) {
        set<int>::iterator it = pos[i].lower_bound(l);
        set<int>::iterator last = pos[i].upper_bound(n);
        if ( it != last && *it <= r ) {
          kind++;
        }
      }
      cout << kind << endl;
    }
  }

  return 0;
}
