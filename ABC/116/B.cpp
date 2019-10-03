#include <bits/stdc++.h>
using namespace std;

bool check_finish(vector<int> ch, int n) {
  for ( int i = 0; i < ch.size(); i++ ) {
    if ( ch[i] == n ) { return true; }
  }
  return false;
}

int main() {
  int s;
  cin >> s;
  vector<int> ch;

  int ans = 1;
  while ( ! check_finish(ch, s) ) {
    ans++;
    ch.push_back(s);
    s = ( s%2 == 0 ) ? s/2 : 3*s+1;
  }

  cout << ans << endl;
  return 0;
}
