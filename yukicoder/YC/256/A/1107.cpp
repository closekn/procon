#include <bits/stdc++.h>
using namespace std;

int main() {
  int a1, a2, a3, a4;
  cin >> a1 >> a2 >> a3 >> a4;
  string ans = ( a1 < a2 && a3 > a4 ) ? "YES" : "NO";
  cout << ans << endl;
  return 0;
}
