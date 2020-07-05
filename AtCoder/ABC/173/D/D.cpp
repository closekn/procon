#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long a[n];
  for ( int i = 0; i < n; i++ ) { 
    cin >> a[i];
  }
  sort(a, a+n);

  long long ans = a[n-1];
  int ct = n-3;
  int sec = 0;
  while ( ct-- >= 0 ) {
    ans += a[n-2];
    sec++;
    if ( sec == 2 ) {
      sec = 0;
      n--;
    }
  }

  cout << ans << endl;
  return 0;
}
