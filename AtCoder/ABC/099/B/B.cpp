#include <bits/stdc++.h>
using namespace std;

int main() {
  int tour[1000];
  tour[0] = 0;
  for ( int i = 1; i < 1000; i++ ) {
    tour[i] = tour[i-1] + i;
  }

  int a, b;
  cin >> a >> b;
  int ans = -1;
  for ( int i = 1; i < 999; i++ ) {
    if ( tour[i]-a == tour[i+1]-b ) {
      ans = tour[i]-a;
    }
  }

  cout << ans << endl;
  return 0;
}
