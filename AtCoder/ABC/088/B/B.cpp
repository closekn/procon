#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }
  sort(a, a+n, greater<int>());
  
  int ans = 0;
  for ( int i = 0; i < n; i++ ) {
    ans += ( i%2 == 0 ) ? a[i] : -a[i];
  }
  cout << ans << endl;
  return 0;
}
