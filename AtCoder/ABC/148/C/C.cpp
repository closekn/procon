#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
  long long tmp;
  while ( a%b != 0 ) {
    tmp = b;
    b = a % b;
    a = tmp;
  }
  return b;
}

long long lcm(long long a, long long b) {
  return a * b / gcd(a, b);
}

int main() {
  long long a, b;
  cin >> a >> b;
  cout << lcm(a, b) << endl;
  return 0;
}
