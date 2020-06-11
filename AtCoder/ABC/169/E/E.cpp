#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n], b[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i] >> b[i];
  }
  sort(a, a+n);
  sort(b, b+n);

  int amid;
  int bmid;
  if ( n%2 == 1 ) {
    amid = a[n/2];
    bmid = b[n/2];
  } else {
    amid = a[(n/2)-1]+a[n/2];
    bmid = b[(n/2)-1]+b[n/2];
  }
  cout << (bmid-amid) + 1 << endl;
  return 0;
}
