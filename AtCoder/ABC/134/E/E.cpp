#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int n, int key) {
  int left = -1;
  int right = n;

  while ( right - left > 1 ) {
    int mid = left + (right - left) / 2;
    if ( arr[mid] > key ) { right = mid; } else { left = mid; }
  }

  return right;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }

  vector<int> colors;
  colors.push_back(a[n-1]);
  for ( int i = n-2; i >= 0; i-- ) {
    int pos = binary_search(colors, colors.size(), a[i]);
    if ( pos < colors.size() ) {
      colors[pos] = a[i];
    } else {
      colors.push_back(a[i]);
    }
  }

  cout << colors.size() << endl;
  return 0;
}
