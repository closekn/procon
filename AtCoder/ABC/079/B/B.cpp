#include <bits/stdc++.h>
using namespace std;

int main() {
  long long luca[87];
  luca[0] = 2;
  luca[1] = 1;
  for ( int i = 2; i <= 86; i++ ) { luca[i] = luca[i-1] + luca[i-2]; }

  int n;
  cin >> n;
  cout << luca[n] << endl;
  return 0;
}
