#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, t;
  cin >> n >> x >> t;
  int ct = ( n%x == 0 ) ? n/x : n/x + 1;
  cout << ct * t << endl;
  return 0;
}
