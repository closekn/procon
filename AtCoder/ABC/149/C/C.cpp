#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
  if (num < 2)      { return false; }
  if (num == 2)     { return true; }
  if (num % 2 == 0) { return false; }

  double sqrtNum = sqrt(num);
  for ( int i = 3; i <= sqrtNum; i += 2 ) {
    if ( num % i == 0 ) { return false; }
  }

  return true;
}

int main() {
  int x;
  cin >> x;
  while ( !isPrime(x) ) { x++; }
  cout << x << endl;
  return 0;
}
