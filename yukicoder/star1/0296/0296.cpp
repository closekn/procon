#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, h, m, t;
  cin >> n >> h >> m >> t;
  m += (n-1)*t;
  h += m/60;
  m %= 60;
  h %= 24;
  cout << h << endl;
  cout << m << endl;
  return 0;
}