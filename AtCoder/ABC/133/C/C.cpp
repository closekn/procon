#include <bits/stdc++.h>
using namespace std;

int main() {
  long long l, r;
  cin >> l >> r;
  bool check[2019];
  for ( int i = 0; i < 2019; i++ ) { check[i] = false; }
  for ( long long i = l; i <= r; i++ ) {
    int t = i%2019;
    if ( check[t] ) { break; }
    check[t] = true;
  }

  int ans;
  if ( check[0] ) {
    ans = 0;
  } else {
    ans = 2018;
    for ( int i = 1; i < 2018; i++ ) {
      if ( ! check[i] ) { continue; }
      for ( int j = i+1; j < 2019; j++ ) {
        if ( ! check[j] ) { break; }
        ans = min(ans, (i*j)%2019);
      }
    }
  }
  
  cout << ans << endl;
  return 0;
}
