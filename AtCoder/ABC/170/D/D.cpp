#include <bits/stdc++.h>
using namespace std;

vector<int> EratosthenesForA(vector<int> a, int n) {
  vector<int> arr(a[n-1]+1, 1);
	
	for( int i = 0; i < n; i++ ) {
		if ( arr[a[i]] ) {
			for( int j = 0; a[i] * (j + 2) <= a[n-1]; j++ ) {
				arr[a[i] * (j + 2)] = 0;
			}
		}
	}

  return arr;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n, 0);
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  vector<int> arr = EratosthenesForA(a, n);
  int ans = 0;
  vector<int> ct(a[n-1]+1, 0);
  for ( int i = 0; i < n; i++ ) {
    if ( arr[a[i]] ) {
      ans++;
      ct[a[i]]++;
    }
  }
  for ( int i = 0; i <= a[n-1]; i++ ) {
    if ( ct[i] > 1 ) {
      ans -= ct[i];
    }
  }
  cout << ans << endl;
  return 0;
}
