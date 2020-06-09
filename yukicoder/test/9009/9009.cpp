#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  long long ans = 0;
  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    long long tmp;
    cin >> tmp;
    ans += tmp;
  }
  cout << ans << endl;
  return 0;
}