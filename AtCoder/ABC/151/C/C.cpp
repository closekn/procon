#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<bool> check_ac(n+1, false);
  vector<int> count_wa(n+1, 0);
  while ( m-- > 0 ) {
    int p;
    string s;
    cin >> p >> s;
    if ( s == "AC" ) {
      check_ac[p] = true;
    }
    if ( s == "WA" ) {
      if ( !check_ac[p] ) { count_wa[p]++; }
    }
  }

  int ac = 0, wa = 0;
  for ( int i = 1; i <= n; i++ ) {
    if ( check_ac[i] ) {
      ac++;
      wa += count_wa[i];
    }
  }
  cout << ac << ' ' << wa << endl;
  return 0;
}
