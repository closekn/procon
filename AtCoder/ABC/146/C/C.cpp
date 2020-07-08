#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, x;
  cin >> a >> b >> x;

  long long right = 1e9;
  if ( a*right + b*to_string(right).size() > x ) {
      long long left = 0;
    while ( right - left > 1 ) {
      long long mid = left + (right-left)/2;
      if ( a*mid + b*to_string(mid).size() > x ) { right = mid; } else { left = mid; }
    }
    right = left;
  }

  cout << right << endl;
  return 0;
}
