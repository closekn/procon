#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  int m;
  cin >> m;
  string t[m];
  for ( int i = 0; i < m; i++ ) { cin >> t[i]; }

  int use[26];
  vector<vector<int> > ch(26, vector<int>(1, -1));
  for ( int i = 0; i < n; i++ ) {
    int tmp = s[i] - 'a';
    if ( ch[tmp][0] == -1 ) {
      ch[tmp][0] = i+1;
    } else {
      ch[tmp].push_back(i+1);
    }
  }

  for ( int i = 0; i < m; i++ ) {
    int maxbuy = 0;
    for ( int i = 0; i < 26; i++ ) { use[i] = 0; }
    for ( int k = 0; k < t[i].length(); k++ ) {
      int tmp = t[i][k] - 'a';
      maxbuy = max(maxbuy, ch[tmp][use[tmp]]);
      use[tmp]++;
    }
    cout << maxbuy << endl;
  }

  return 0;
}