#include <bits/stdc++.h>
using namespace std;

int main() {
  int b, g;
  cin >> b >> g;
  string yasuo = ( b+1 <= g ) ? "YES" : "NO";
  int rem_num = max(b+1, g) - min(b+1, g);
  cout << yasuo << endl;
  cout << rem_num << endl;
  return 0;
}