#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string ans = "APPROVED";

  for ( int i = 0; i < n; i++ ) {
    int a;
    cin >> a;
    if ( a%2 == 0 && a%3 != 0 && a%5 != 0 ) {
      ans = "DENIED";
    }
  }

  cout << ans << endl;
  return 0;
}
