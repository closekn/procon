#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e15 + 1;

int main() {
  long long n, mn = INF;
  cin >> n;
  for ( int i = 0; i < 5; i++ ) {
    long long caryy;
    cin >> caryy;
    mn = min(caryy, mn);
  }

  long long ans = ( n%mn == 0 ) ? (n/mn) + 4 : (n/mn) + 5;
  cout << ans << endl;
  return 0;
}
