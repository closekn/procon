#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  
  vector<int> len_num(n, 0);
  for ( int i = 1; i < n; i++ ) {
    for ( int j = i+1; j <= n; j++ ) {
      int len = min(j-i, min(abs(x-i)+abs(j-y)+1, abs(y-i)+abs(j-x)+1));
      len_num[len]++;
    }
  }

  for ( int i = 1; i < n; i++ ) {
    cout << len_num[i] << endl;
  }
  return 0;
}
