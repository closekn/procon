#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;
  while ( !(n[0] == n[1] && n[1] == n[2]) ) {
    n = to_string( stoi(n) + 1 );
  }
  cout << n << endl;
  return 0;
}
