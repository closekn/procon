#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }

  double sum = 0.0;
  for ( int i = 0; i < n; i++ ) {
    sum += 1.0/a[i];
  }

  printf("%.14f\n", 1.0/sum);
  return 0;
}
