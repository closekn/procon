#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  int k;
  cin >> n >> k;

  while ( k-- > 0 ) {
    if ( n % 200 == 0 ) {
      n /= 200;
    } else {
      n *= 1000;
      n += 200;
    }
  }

  cout << n << endl;
  return 0;
}
