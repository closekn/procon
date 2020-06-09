#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  if ( n == k ) { cout << "Drew" << endl; } else
  if ( (n+1)%3 == k ) { cout << "Won" << endl; } else
  { cout << "Lost" << endl; }
  return 0;
}