#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  long long l = stoi(s, 0, 2);

  int ct = 0;
  for ( int a = 0; a <= l/2; a++ ) {
    for ( int b = a; a+b <= l; b++ ) {
      ct += ( a^b == a+b ) ? 1 : 0;
      ct %= 1000000007;
    }
  }

  cout << ct << endl;
  return 0;
}