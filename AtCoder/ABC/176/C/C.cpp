#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long ans = 0;
  long long bef = -1;
  for ( int i = 0; i < n; i++ ) {
    long long a;
    cin >> a;
    if ( bef > a ) {
      ans += (bef-a);
    } else {
      bef = a;
    }
  }
  cout << ans << endl;
  return 0;
}
