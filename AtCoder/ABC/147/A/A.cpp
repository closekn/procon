#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 3;
  int sum = 0;
  while ( n-- ) {
    int a;
    cin >> a;
    sum += a;
  }
  string ans = ( sum > 21 ) ? "bust" : "win";
  cout << ans << endl;
  return 0;
}
