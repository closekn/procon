#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  int n500 = x/500;
  x %= 500;
  int n5 = x/5;
  cout << 1000*n500 + 5*n5 << endl;
  return 0;
}
