#include <iostream>
#include <vector>
using namespace std;

const int N = 12 // num

void bit_wise_search() {
  for ( int bit; bit < (1<<N); bit++ ) {
    for ( int i = 0; i < N; i++ ) {
      if ( bit & (1<<i) ) {
        // do
      }
    }
  }
}
