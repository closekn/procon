#include <bits/stdc++.h>
using namespace std;

int main() {
  
  while ( true ) {

    int n;
    cin >> n;
    if ( n == 0 ) { break; }
    int a[n];
    long long sum = 0;
    for ( int i = 0; i < n; i++ ) {
      cin >> a[i];
      sum += a[i];
    }
    double ave = (double) sum / n;
    int ans = 0;
    for ( int i = 0; i < n; i++ ) {
      ans += ( a[i] <= ave ) ? 1 : 0;
    }
    cout << ans << endl;
  
  }
  
  return 0;
}
