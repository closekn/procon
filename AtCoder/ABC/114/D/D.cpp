#include <bits/stdc++.h>
using namespace std;

int num(vector<int> e, int m) {
  int ret = 0;
  for ( int i = 0; i < e.size(); i++ ) {
    if ( e[i] >= m ) { ret++; }
  }
  return ret;
}

int main() {
  int n;
  cin >> n;

  vector<int> e(n+1, 0);
  for ( int i = 2; i <= n; i++ ) {
    int cur = i;
    for ( int j = 2; j <= i; j++ ) {
      while ( cur%j == 0 ) {
        e[j]++;
        cur /= j;
      }
    }
  }

  int d75 = num(e, 74);
  int d25_3 = num(e, 24) * (num(e, 2)-1);
  int d15_5 = num(e, 14) * (num(e, 4)-1);
  int d5_5_3 = num(e, 4) * (num(e, 4)-1) * (num(e, 2)-2) / 2;
  cout << d75 + d25_3 + d15_5 + d5_5_3 << endl;
  return 0;
}
