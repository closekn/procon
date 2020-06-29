#include <bits/stdc++.h>
using namespace std;

const long long INF = (long long) 1e18 + 1ll;
 
int main(){
  long long n, k;
  cin >> n >> k;
  long long a[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
  }
  sort(a, a+n);

  long long left = -INF, right = INF;
  while ( right - left > 1 ) {
    long long mid = (right+left) / 2;
    long long s = 0, t = 0;

    for ( int i = 0; i < n; i++ ) {

      if ( a[i] > 0 ){

        int l = -1, r = n;
        while ( r - l > 1) {
          int m = (r + l) / 2;
          if ( a[i] * a[m] <= mid ) { l = m; } else { r = m; }
        }
        s += r;

      } else if ( a[i] < 0 ) {

        int l = -1, r = n;
        while ( r - l > 1 ) {
          int m = (r + l) / 2;
          if(a[i] * a[m] <= mid) { r = m; } else { l = m; }
        }
        s += n - r;

      } else if ( mid >= 0 ) {

        s += n;

      }

      if ( a[i] * a[i] <= mid ) { t++; }

    }

    long long num = (s - t) / 2;
    if ( num >= k ) { right = mid; } else { left = mid; }
  }

  cout << right << endl;
  return 0;
}
