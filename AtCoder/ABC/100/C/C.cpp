#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long ans = 0;
  for ( int i = 0; i < n; i++ ) {
    long long a;
    cin >> a;
    while ( a%2 == 0 ) {
      ans++;
      a /= 2;
    }
  }
  cout << ans << endl;
  return 0;
}
