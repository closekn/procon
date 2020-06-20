#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  long long ans = 0;
  for ( int i = 1; i <= n; i++ ) {
    ans += ( i%3 == 0 || i%5 == 0 ) ? 0 : i;
  }

  cout << ans << endl;
  return 0;
}
