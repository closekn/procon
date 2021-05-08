#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long ct[200] = {};
  for ( int i = 0; i < n; i++ ) {
    int a;
    cin >> a;
    ct[a%200]++;
  }

  long long ans = 0;
  for ( int i = 0; i < 200; i++ ) {
    if ( ct[i] >= 2 ) {
      ans += ct[i] * (ct[i]-1) / 2;
    }
  }
  cout << ans << endl;
  return 0;
}
