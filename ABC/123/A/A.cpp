#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[5];
  int k;
  for ( int i = 0; i < 5; i++ ) { cin >> a[i]; }
  cin >> k;
  string ans = "Yay!";
  for ( int i = 0; i < 4; i++ ) {
    for ( int j = i+1; j < 5; j++ ) {
      if ( a[j]-a[i] > k ) { ans = ":("; }
    }
  }
  cout << ans << endl;
  return 0;
}
