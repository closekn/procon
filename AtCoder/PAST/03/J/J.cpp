#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int y[n];
  for ( int i = 0; i < n; i++ ) { y[i] = -1;  }

  while ( m-- > 0 ) {
    int a;
    int ate;
    cin >> a;

    int left = -1;
    int right = n;
    while ( right - left > 1 ) {
      int mid = left + (right - left) / 2;
      if ( y[mid] < a ) { right = mid; } else { left = mid; }
    }
    if ( right == n ) {
      ate = -1;
    } else {
      ate = right+1;
      y[right] = a;
    }
    cout << ate << endl;
  }

  return 0;
}
