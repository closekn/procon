
/**
 * @fn 二分探索法
 * @bref ソート済配列に対してkey以上を満たす最小のindexを捜索
 * @param (arr) 探索対象のソート済配列
 * @param (n) arrサイズ
 * @return key以上を満たす最小のindex (どのindexも適さない場合はn)
 */
int binary_search(int arr[], int n) {
  int left = -1;
  int right = n;
  int key = 10;

  while ( right - left > 1 ) {
    int mid = left + (right - left) / 2;
    if ( arr[mid] >= key ) { right = mid; } else { left = mid; }
  }

  return right;
}