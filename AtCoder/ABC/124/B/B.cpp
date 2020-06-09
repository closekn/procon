#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, inn, max;
  cin >> n;
  int h[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> h[i];
  }
  inn = 1;
  max = h[0];
  for ( int i = 1; i < n; i++ ) {
    max = ( h[i] > max ) ? h[i] : max;
    inn += ( h[i] >= max ) ? 1 : 0;
  }

  cout << inn << endl;
  return 0;
}