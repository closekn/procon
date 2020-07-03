#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, m;
  cin >> n >> k >> m;
  
  int sum = 0;
  int goal = n*m;
  while ( n-- > 1 ) {
    int a;
    cin >> a;
    sum += a;
  }

  int ans;
  if ( goal-sum < 0 ) {
    ans = 0;
  } else if ( goal-sum > k ) {
    ans = -1;
  } else {
    ans = goal - sum;
  }
  cout << ans << endl;
  return 0;
}
