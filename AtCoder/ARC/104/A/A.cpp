#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int y = (a-b)/2;
  int x = a-y;

  cout << x << ' ' << y << endl;
  return 0;
}
