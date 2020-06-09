#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  vector<int> arr;
  arr.push_back(a);
  arr.push_back(b);
  arr.push_back(c);
  sort(arr.begin(), arr.end());

  int ct = 0;
  if ( arr[1]-arr[0] < d ) { ct += d - (arr[1]-arr[0]); }
  if ( arr[2]-arr[1] < d ) { ct += d - (arr[2]-arr[1]); }
  
  cout << ct << endl;
  return 0;
}