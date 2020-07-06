#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = 0;
  int search = 1;
  while ( n-- > 0 ) {
    int a;
    cin >> a;
    if ( a == search ) {
      search++;
    } else {
      ans++;
    }
  }
  ans = ( search == 1 ) ? -1 : ans;

  cout << ans << endl;
  return 0;
}
