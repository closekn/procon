#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > num;

int main() {
  string s, t;
  cin >> s;
  cin >> t;
  int len = s.length();

  for ( int i = 0; i < 26; i++ ) {
    vector<int> tmp;
    num.push_back(tmp);
  }
  for ( int i = 0; i < len; i++ ) {
    num[s[i]-'a'].push_back(i);
  }

  long long ans = 1;
  int np = 0;
  for ( int i = 0; i < t.length(); i++ ) {
    int tm = t[i]-'a';
    if ( num[tm].size() == 0 ) { ans = -1; break; }
    for ( int k = 0; k < num[tm].size(); k++ ) {
      if ( np >= num[tm][k] ) {
        if ( k == num[tm].size()-1 ) {
          ans += len+num[tm][0]-np;
          np = num[tm][0];
          break;
        }
        continue;
      }
      ans += num[tm][k]-np;
      np = num[tm][k];
      break;
    }
  }

  cout << ans << endl;
  return 0;
}
