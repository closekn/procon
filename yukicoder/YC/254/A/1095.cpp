#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
  }

  bool up = false;
  bool down = false;
  int bef = a[0];
  for ( int i = 1; i < n; i++ ) {
    if ( bef > a[i] ) { down = true; } else { up = true; }
    bef = a[i];
  }
  if ( !up || !down ) { cout << -1 << endl; return 0; }

  int min_index = 0;
  vector<int> left_min(n, 0);
  vector<int> right_min(n, 0);
  for ( int i = 1; i < n; i++ ) {
    if ( a[min_index] > a[i] ) { min_index = i; }
  }
  left_min[0] = a[0];
  right_min[n-1] = a[n-1];
  for ( int i = 1; i < n; i++ ) {
    left_min[i] = min(a[i], left_min[i-1]);
  }
  for ( int i = n-2; i >= 0; i-- ) {
    right_min[i] = min(a[i], right_min[i+1]);
  }
  
  int ans = 3 * (1e8);
  if ( 0 < min_index && min_index < n-1 ) {
    ans = left_min[min_index-1] + a[min_index] + right_min[min_index+1];
  }
  for ( int i = 1; i < n-1; i++ ) {
    if ( i == min_index ) { continue; }
    if ( i < min_index ) {
      if ( left_min[i-1] > a[i] ) { continue; }
      ans = min(ans, left_min[i-1]+a[i]+a[min_index]);
    }
    if ( i > min_index ) {
      if ( right_min[i+1] > a[i] ) { continue; }
      ans = min(ans, a[min_index]+a[i]+right_min[i+1]);
    }
  }

  cout << ans << endl;
  return 0;
}
