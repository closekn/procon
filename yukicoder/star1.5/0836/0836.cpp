#include <bits/stdc++.h>
using namespace std;

int main() {
  long long l, r, mod;
  cin >> l >> r >> mod;
  
  for ( long long i = 0; i < mod; i++ ) {
    long long c1, c2;
    c1 = r/mod + ( ( r%mod >= i ) ? 1 : 0 );
    c2 = (l-1)/mod + ( ( (l-1)%mod >= i ) ? 1 : 0);
    cout << c1 - c2 << endl;
  }
  return 0;
}