#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a;
  string b;
  cin >> a;
  cin >> b;
  long long bx100 = stoll(b.replace(b.find("."), 1, ""));
  cout << a * bx100 / 100 << endl;
  return 0;
}
