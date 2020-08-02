#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string c;
  cin >> n;
  cin >> c;

  vector<int> posr;
  for ( int i = 0; i < n; i++ ) {
    if ( c[i] == 'R' ) { posr.push_back(i); }
  }

  int ans = 0;
  for ( int i = 0; i < n; i++ ) {
    if ( c[i] == 'W' ) {
      if ( posr.size() > 0 && i < posr[posr.size()-1] ) {
        c[posr[posr.size()-1]] = 'W';
        c[i] = 'R';
        posr.pop_back();
        ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
