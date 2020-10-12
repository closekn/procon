#include <bits/stdc++.h>
using namespace std;

int main() {
  char s;
  char t;
  cin >> s;
  cin >> t;
  char ans = ( s == 'Y' ) ? toupper(t) : t;
  cout << ans << endl;
  return 0;
}
