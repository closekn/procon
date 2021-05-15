#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a, a+3);
  string ans = "No";
  if ( a[2] - a[1] == a[1] - a[0] ) { ans = "Yes"; }
  cout << ans << endl;
  return 0;
}
