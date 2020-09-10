#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  cin >> n >> a;
  string ans = ( a >= (n%500) ) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
