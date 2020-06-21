#include <bits/stdc++.h>
using namespace std;

int main() {
  char a;
  cin >> a;
  char ans = ( 0 <= a-'a' && a-'a' < 26 ) ? 'a' : 'A';
  cout << ans << endl;
  return 0;
}
