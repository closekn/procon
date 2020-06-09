#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  long long m0 = 0;
  long long mk2 = 0;
  for ( int i =1; i <= n; i++ ) {
    m0 += ( i%k == 0 ) ? 1 : 0;
    mk2 += ( i%k == k/2 ) ? 1 : 0;
  }

  long long ans = ( k%2 != 0 ) ? m0*m0*m0 : m0*m0*m0 + mk2*mk2*mk2;
  cout << ans << endl;
  return 0;
}
