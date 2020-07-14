#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  int range = 1 + 2*d;
  int ans = ( n%range == 0 ) ? n/range: (n/range)+1;
  cout << ans << endl;
  return 0;
}
