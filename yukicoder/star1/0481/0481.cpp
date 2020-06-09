#include <bits/stdc++.h>
using namespace std;

#define N 9
#define TRUE_SUM 55

int main() {
  int sum = 0;
  for ( int i = 0; i < N; i++ ) {
    int t;
    cin >> t;
    sum += t;
  }
  cout << TRUE_SUM - sum << endl;
  return 0;
}