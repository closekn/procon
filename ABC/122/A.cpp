#include <bits/stdc++.h>
using namespace std;

int main() {
  char cl;
  cin >> cl;
  char ans = 'A';
  if ( cl == 'A' ) { ans = 'T'; }
  if ( cl == 'G' ) { ans = 'C'; }
  if ( cl == 'C' ) { ans = 'G'; }
  cout << ans << endl;
  return 0;
}
