#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  long long k;
  cin >> n >> k;
  int a[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
  }
 
  long long ct = 0;
  long long sum = 0;

  int r = 0;
  for ( int i = 0; i < n; ++i ) {
    while ( sum < k ) {
      if ( r == n ) { break; }
      sum+=a[r++];      
    }
    if ( sum < k ) { break; }
    ct += n-r+1;
    sum -= a[i];
  }
 
  cout << ct << endl;
  return 0;
}