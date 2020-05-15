#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;
  int ans = ( k%2 == 0 ) ? (k/2)*(k/2) : (k/2)*(k/2+1);
  cout << ans << endl;
  return 0;
}
