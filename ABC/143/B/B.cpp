#include <bits/stdc++.h>
using namespace std;

int main() {
  int sum = 0;
  int n;
  cin >> n;
  int y[n];
  for ( int i = 0; i < n; i++ ) { cin >> y[i]; }
  for ( int i = 0; i < n; i++ ) {
    for ( int j = i+1; j < n; j++ ) {
      sum += y[i]*y[j];
    }
  }
  cout << sum << endl;
  return 0;
}
