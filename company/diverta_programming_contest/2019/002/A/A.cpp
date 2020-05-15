#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, ans;
  cin >> n >> k;
  ans = ( k != 1 ) ? n-k : 0;
  cout << ans << endl;
  return 0;
}