#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, t, sum;
  cin >> a >> b >> t;

  sum = 0;
  for ( int i = 1; i*a <= t ; i++ ) {
    sum += b;
  }

  cout << sum << endl;
  return 0;
}