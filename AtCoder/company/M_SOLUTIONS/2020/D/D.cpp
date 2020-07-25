#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }

  vector<bool> mn(n, false);
  vector<bool> mx(n, false);
  bool down;
  if ( a[0] > a[1] ) {
    down = true;
    mx[0] = true;
  } else {
    down = false;
    mn[0] = true;
  }
  for ( int i = 1; i < n-1; i++ ) {
    if ( a[i] > a[i+1] ) {
      if ( !down ) { mx[i] = true; }
      down = true;
    } else {
      if ( down ) { mn[i] = true; }
      down = false;
    }
  }
  if ( !down ) { mx[n-1] = true; }

  long long ans = 1000;
  long long kabu = 0;
  for ( int i = 0; i < n; i++ ) {
    if ( mn[i] ) {
      long long buy = ans / a[i];
      kabu += buy;
      ans -= (buy*a[i]);
    }
    if ( mx[i] ) {
      ans += (kabu*a[i]);
      kabu = 0;
    }
  }

  cout << ans << endl;
  return 0;
}
