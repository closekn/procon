#include <bits/stdc++.h>
using namespace std;

void Eratosthenes(int arr[], int n) {
	for(int i = 0; i <= n; i++){
		arr[i] = 1;
	}
	for(int i = 2; i < sqrt(n); i++){
		if(arr[i]){
			for(int j = 0; i * (j + 2) <= n; j++){
				arr[i *(j + 2)] = 0;
			}
		}
	}
}

int main() {
  int n;
  cin >> n;
  int arr[n+1];
  int ans = 0;
  Eratosthenes(arr, n);

  for ( int r = 2; r*r <= 2*n; r++ ) {
    if ( arr[r] ) {
      int p = 2;
      int q = r*r - p;
      if ( q > n ) { p += q-n; q = n; }
      while ( p <= n && q >= 2 ) {
        if ( arr[p] && arr[q] ) { ans++; }
        p++;
        q--;
      }
    }
  }

  cout << ans << endl;
  return 0;
}