#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string ans = "No";
  for ( int i = 1; i < 10; i++ ) {
    for ( int j = 1; j < 10; j++ ) {
      if ( n == i*j ) { ans = "Yes"; }
    }
  }
  cout << ans << endl;
  return 0;
}
