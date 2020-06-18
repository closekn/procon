#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int work_days = 0;
  for ( int i = 0; i < m; i++ ) {
    int a;
    cin >> a;
    work_days += a;
  }
  int ans = n - work_days;
  ans = ( ans < 0 ) ? -1 : ans;
  cout << ans << endl;
  return 0;
}
