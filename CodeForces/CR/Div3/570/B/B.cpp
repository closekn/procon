#include <bits/stdc++.h>
using namespace std;

int a_min(int a[], int n) {
  int ret = a[0];
  for ( int i = 1; i < n; i++ ) { ret = ( a[i] < ret ) ? a[i] : ret; }
  return ret;
}

int a_max(int a[], int n) {
  int ret = a[0];
  for ( int i = 1; i < n; i++ ) { ret = ( a[i] > ret ) ? a[i] : ret; }
  return ret;
}

int main() {
  int que;
  cin >> que;
  int n, k;
  for ( int q = 0; q < que; q++ ) {
    cin >> n >> k;
    int a[n];
    for ( int i = 0; i < n; i++ ) { cin >> a[i]; }
    long long b;
    int m = a_min(a, n);
    int M = a_max(a, n);
    long long mmax = m + k;
    long long mmin = ( m-k > 0 ) ? m-k : 0;
    long long Mmax = M + k;
    long long Mmin = ( M-k > 0 ) ? M-k : 0;
    long long fmax = ( mmax < Mmax ) ? mmax : Mmax;
    long long fmin = ( mmin > Mmin ) ? mmin : Mmin;
    b = ( fmin > fmax ) ? -1 : fmax;
    cout << b << endl;
  }

  return 0;
}