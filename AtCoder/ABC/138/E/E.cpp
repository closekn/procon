#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > num;

int main() {
  string s, t;
  cin >> s;
  cin >> t;
  s += s;

  bool can = true;
  int n = s.size();
  int next_ch[n][26];
  for ( int ci = 0; ci < 26; ci++ ) {
    char c = 'a'+ci;
    if ( t.find(c) == string::npos ) { continue; }
    int si = 0;
    string::size_type p = s.find(c);
    if ( p == string::npos ) { can = false; break; }
    int first_pos = p;
    while ( p != string::npos ) {
      for ( ; si < p; si++ ) { next_ch[si][ci] = p; }
      p = s.find(c, p+1);
    }
    for ( ; si < n; si++ ) { next_ch[si][ci] = first_pos; }
  }

  long long ans;
  if ( can ) {
    ans = s.find(t[0]);
    for ( int i = 1; i < t.size(); i++ ) {
      int c = t[i]-'a';
      int spos = ans%n;
      if ( spos < next_ch[spos][c] ) {
        ans += next_ch[spos][c] - spos;
      } else {
        ans += (n-spos) + next_ch[spos][c];
      }
    }
    ans++;
  } else {
    ans = -1;
  }

  cout << ans << endl;
  return 0;
}
