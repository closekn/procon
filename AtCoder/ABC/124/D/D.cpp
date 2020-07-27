#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  vector<int> p; 
  for ( int i = 0; i < n; ) {
    if ( s[i] == '0' ) {
      p.push_back(i);
      while ( i < n && s[i] == '0' ) { i++; }
    }
    if ( s[i] == '1' ) {
      p.push_back(i);
      while ( i < n && s[i] == '1' ) { i++; }
    }
  }
  
  int ans = 0;
  for ( int i = 0; i < p.size(); i++ ) {
    int cur_len = 0;;
    if ( s[p[i]] == '0' ) {
      cur_len = ( i + 2*k < p.size() ) ? p[i+2*k]-p[i] : n-p[i];
    } else {
      cur_len = ( i+1 + 2*k < p.size() ) ? p[i+1+2*k]-p[i] : n-p[i];
    }
    ans = max(ans, cur_len);
  }

  cout << ans << endl;
  return 0;
}