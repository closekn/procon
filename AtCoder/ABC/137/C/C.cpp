#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<vector<int>, int> mp;

  long long ans = 0;
  while ( n-- > 0 ) {
    vector<int> alp(26, 0);
    string s;
    cin >> s;
    for ( int i = 0; i < s.size(); i++ ) {
      alp[s[i]-'a']++;
    }
    ans += mp[alp];
    mp[alp]++;
  }

  cout << ans << endl;
  return 0;
}
