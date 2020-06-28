#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, r;
  cin >> n >> r;
  int ans = ( n >= 10 ) ? r : r+100*(10-n);
  cout << ans << endl;
  return 0;
}
