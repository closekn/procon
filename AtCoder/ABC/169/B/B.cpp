#include <bits/stdc++.h>
using namespace std;

const long long lim = 1e18;

int main() {
  int n;
  cin >> n;
  long long a[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
  }
  long long mlt = 1;
  for ( int i = 0; i < n; i++ ) {
    if ( a[i] == 0 ) { mlt = 0; break; }
    mlt = ( mlt == -1 || a[i] > lim / mlt ) ? -1 : mlt * a[i];
  }
  cout << mlt << endl;
  return 0;
}
