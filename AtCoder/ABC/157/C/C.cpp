#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> num(n, -1);
  bool make = true;

  while ( m-- > 0 ) {
    int s, c;
    cin >> s >> c;
    s--;
    if ( num[s] != -1 && num[s] != c ) {
      make = false;
      break;
    }
    num[s] = c;
  }
  if ( num[0] == 0 && n != 1 ) { make = false; }
  for ( int i = 0; i < n; i++ ) {
    if ( num[i] == -1 ) {
      num[i] = ( n != 1 && i == 0 ) ? 1 : 0;
    }
  }
  
  int ans = -1;
  if ( make ) {
    ans = 0;
    for ( int i = 0; i < 3; i++ ) {
      ans += num[i] * pow(10, n-i-1);
    }
  }
  cout << ans << endl;
  return 0;
}
