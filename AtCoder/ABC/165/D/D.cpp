#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, n;
  cin >> a >> b >> n;
  cout << a * min(b-1, n) / b << endl;
  return 0;
}
