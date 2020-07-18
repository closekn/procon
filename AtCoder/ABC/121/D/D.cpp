#include <bits/stdc++.h>
using namespace std;

long long F_0_(long long n) {
  long long ret;
  if ( n%2 == 0 ) {
    ret = ( (n/2)%2 == 0 ) ? 0 : 1;
    ret ^= n;
  } else {
    ret = ( ((n+1)/2)%2 == 0 ) ? 0 : 1;
  }
  return ret; 
}

int main() {
  long long a, b;
  cin >> a >> b;
  long long ans = F_0_(a-1) ^ F_0_(b);
  cout << ans << endl; 
  return 0;
}
