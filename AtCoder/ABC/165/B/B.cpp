#include <bits/stdc++.h>
using namespace std;

int main() {
  long long x;
  cin >> x;
  long long mon = 100;
  long long r;
  int y = 0;
  while ( mon < x ) {
    y++;
    r = mon/100;
    mon += r;
  }
  cout << y << endl;
  return 0;
}
