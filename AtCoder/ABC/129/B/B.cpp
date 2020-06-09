#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int w[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> w[i];
  }
  int min = 100000, s1, s2;
  for ( int i = 0; i < n; i++ ) {
    int j;
    s1 = 0;
    s2 = 0;
    for ( j = 0; j <= i; j++ ) {
      s1 += w[j];
    }
    for ( ; j < n; j++ ) {
      s2 += w[j];
    }
    min = ( min > abs(s1-s2) ) ? abs(s1-s2) : min;
  }

  cout << min << endl;
  return 0;
}