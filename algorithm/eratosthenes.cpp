#include <cmath>
using namespace std;

/**
 * @fn エラトステネスの篩でnまでの数の素数判定結果記憶配列の作成
 * @param (arr) 記憶配列とするもの(事前にn+1の空間を用意する必要あり)
 * @param (n) 素数判定を行う最大値
 */
void Eratosthenes(int arr[], int n) {
	for(int i = 0; i <= n; i++){
		arr[i] = 1;
	}
	double sqrtNum = sqrt(n);
	for( int i = 2; i < sqrtNum; i++ ) {
		if ( arr[i] ) {
			for( int j = 0; i * (j + 2) <= n; j++ ) {
				arr[i *(j + 2)] = 0;
			}
		}
	}
}
