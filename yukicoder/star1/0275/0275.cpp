#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  double m;
  cin >> n;
  vector<int> a;
  for ( int i = 0; i < n; i++ ) {
    int t;
    cin >> t;
    a.push_back(t);
  }
  sort(a.begin(), a.end());
  if ( n%2 == 0 ) {
    m = (double)( a[n/2] + a[(n/2)-1] ) / 2.0; 
  } else {
    m = (double)a[n/2];
  }
  printf("%.1f\n", m);
  return 0;
}