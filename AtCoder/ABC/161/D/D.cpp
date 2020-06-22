#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;

  queue<long long> que;
  for ( int i = 1; i <= 9; i++ ) {
    que.push(i);
  }

  long long x;
  while ( k-- > 0 ) {
    x = que.front();
    que.pop();
    if ( x%10 != 0 ) { que.push(10*x + x%10 - 1); }
    que.push(10*x + x%10);
    if ( x%10 != 9 ) { que.push(10*x + x%10 + 1); }
  }

  cout << x << endl;
  return 0;
}
