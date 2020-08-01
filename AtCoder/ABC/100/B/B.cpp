#include <bits/stdc++.h>
using namespace std;

int main() {
  int d, n;
  cin >> d >> n;
  int pow100d = pow(100, d);
  n = ( n == 100 ) ? 101 : n;
  cout << n * pow100d << endl;
  return 0;
}
