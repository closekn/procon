#include <bits/stdc++.h>
using namespace std;

int main() {
  long long h, w;
  cin >> h >> w;
  if ( h < w ) { swap(h, w); }

  long long ans;
  if ( h == 1 ) {
    ans = 1;
  } else if ( w == 1 ) {
    ans = h - 2;
  } else {
    ans = (h-2) * (w-2);
  }

  cout << ans << endl;
  return 0;
}
