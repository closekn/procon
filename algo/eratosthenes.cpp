#include <bits/stdc++.h>
using namespace std;

#define N 100

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
  int arr[N+1];
  Eratosthenes(arr, N);

  for ( int i = 2; i < N; i++ ) {
    if ( arr[i] ) {
      cout << i << endl;
    }
  }

  return 0;
}