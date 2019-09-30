#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int ans = ( b%a == 0 ) ? a+b : b-a;
  cout << ans << endl;
  return 0;
}
