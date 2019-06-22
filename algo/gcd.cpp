#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  int tmp;
  while ( a%b != 0 ) {
    tmp = b;
    b = a % b;
    a = tmp;
  }
  return b;
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << gcd(a, b) << endl;
  return 0;
}