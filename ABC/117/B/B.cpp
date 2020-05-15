#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int l[n];
  for ( int i = 0; i < n; i++ ) { cin >> l[i]; }
  sort(l, l+n);
  int sum = 0;
  for ( int i = 0; i < n-1; i++ ) { sum += l[i]; }
  string ans = ( sum > l[n-1] ) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
