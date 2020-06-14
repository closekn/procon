#include <iostream>
#include <vector>
using namespace std;

const int N = 12 // num

/**
 * @fn bit全探索
 * @brief 部分集合を全パターン列挙し調査
 */
void bit_wise_search() {
  for ( int bit; bit < (1<<N); bit++ ) {
    for ( int i = 0; i < N; i++ ) {
      if ( bit & (1<<i) ) {
        // do
      }
    }
  }
}
