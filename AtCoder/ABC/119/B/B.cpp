#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  double x[n];
  string u[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> x[i] >> u[i];
  }

  double ans = 0;
  for ( int i = 0; i < n; i++ ) {
    ans += ( u[i] == "JPY" ) ? x[i] : x[i]*380000.0;
  }

  cout << ans << endl;
  return 0;
}
