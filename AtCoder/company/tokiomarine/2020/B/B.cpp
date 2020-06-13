#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, v;
  long long b, w;
  long long t;
  cin >> a >> v;
  cin >> b >> w;
  cin >> t;
  string ans;
  if ( w >= v ) {
    ans = "NO";
  } else {
    long long len = v-w;
    long long dif = ( a > b ) ? a-b : b-a;
    ans = ( len*t >= dif ) ? "YES" : "NO";
  }
  cout << ans << endl;
  return 0;
}
