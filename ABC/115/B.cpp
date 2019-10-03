#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int mx = 0;
  int ans = 0;
  for ( int i = 0; i < n; i++ ) {
    int p;
    cin >> p;
    ans += p;
    if ( p > mx ) { mx = p;} 
  }
  cout << ans - (mx/2) << endl;
  return 0;
}
