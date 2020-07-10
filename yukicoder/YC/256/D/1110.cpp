#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  vector<int> a(n);
  vector<int> sorted;
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
    sorted.push_back(a[i]);
  }
  sort(sorted.begin(), sorted.end());

  for ( int i = 0; i < n; i++ ) {
    int key = a[i]-d;

    int right = n;
    int left = -1;
    while ( right - left > 1 ) {
      int mid = left + (right - left) / 2;
      if ( key >= sorted[mid] ) { left = mid; } else { right = mid; }
    }

    cout << left+1 << endl;
  }
  return 0;
}
