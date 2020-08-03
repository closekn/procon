#include <bits/stdc++.h>
using namespace std;

const int COLOR_NUM = 8;

int main() {
  int n;
  cin >> n;

  vector<int> clr(COLOR_NUM, 0);
  int clr_free = 0;
  while ( n-- > 0 ) {
    int rate;
    cin >> rate;
    int rank = rate/400;
    if ( rank < COLOR_NUM ) {
      clr[rank]++;
    } else {
      clr_free++;
    }
  }

  int mn = 0, mx = 0;
  for ( int i = 0; i < COLOR_NUM; i++ ) {
    if ( clr[i] > 0 ) { mn++; }
  }
  if ( mn == 0 && clr_free > 0 ) { mn = 1; clr_free--; }
  mx = mn + clr_free;

  cout << mn << ' ' << mx << endl;
  return 0;
}
