#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int a, b;
  cin >> n;
  if ( n == 2 ) {
    cin >> a >> b;
  }
  string ans = ( n == 1 ) ? "Hello World" : to_string(a+b);
  cout << ans << endl;
  return 0;
}
