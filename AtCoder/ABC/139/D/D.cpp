#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  long long ans = ( n != 1 ) ? (n-1)*n/2 : 0;
  cout << ans << endl;
  return 0;
}
