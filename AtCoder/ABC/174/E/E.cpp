#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[n];
  int maxa = 0;
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
    maxa = max(maxa, a[i]);
  }
  
  int left = 0;
  int right = maxa;
  while ( right - left > 1 ) {
    int mid = (right+left)/2;

    long long cut = 0;
    for ( int i = 0; i < n; i++ ) {
      cut += (a[i]-1)/mid;
    }

    if ( cut <= k ) { right = mid; } else { left = mid; }
  }

  cout << right << endl;
  return 0;
}
