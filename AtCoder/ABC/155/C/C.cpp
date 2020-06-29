#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  int mx = 0;
  for ( int i = 0; i < n; i++ ) {
    string s;
    cin >> s;
    mp[s]++;
    mx = ( mp[s] > mx ) ? mp[s] : mx;
  }

  for ( const auto& m : mp ) {
    if ( m.second == mx ) {
      cout << m.first << endl;
    }
  }

  return 0;
}
