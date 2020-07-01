#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

int main() {
  int n;
  cin >> n;

  int mn = INF;
  int ans = 0;
  while ( n-- > 0 ) {
    int p;
    cin >> p;
    if ( p <= mn ) {
      mn = p;
      ans++;
    }
  }
  
  cout << ans << endl;
  return 0;
}
