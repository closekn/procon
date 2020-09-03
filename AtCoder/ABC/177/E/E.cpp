#include <bits/stdc++.h>
using namespace std;

int d[1000005];

void Eratosthenes(int arr[], int n) {
  for(int i = 0; i <= n; i++){
    arr[i] = 1;
  }
  double sqrtNum = sqrt(n);
  for( int i = 2; i < sqrtNum; i++ ) {
    if ( arr[i] == 1 ) {
      for( int j = 0; i * (j + 2) <= n; j++ ) {
        arr[i *(j + 2)] = i;
      }
    }
  }
}

int gcd(int a, int b) {
  int tmp;
  while ( a%b != 0 ) {
    tmp = b;
    b = a % b;
    a = tmp;
  }
  return b;
}

int main() {
  Eratosthenes(d, 1000001);
  int n;
  cin >> n;
  int a[n];
  for ( int i = 0; i < n; i++ ) { cin >> a[i]; }
  
  string ans = "not coprime";
  //-- check "setwise coprime"
  int all_gcd = a[0];
  for ( int i = 1; i < n; i++ ) {
    all_gcd = gcd(all_gcd, a[i]);
  }
  if ( all_gcd == 1 ) { ans = "setwise coprime"; }
  //-- check "pairwise coprime"
  bool ok = true;
  for ( int i = 0; i < n; i++ ) {
    if ( a[i] == 1 ) { continue; }
    int now = a[i];
    while ( ok ) {
      if ( d[now] <= 0 && !(d[now] == -i) ) { ok = false; break; }
      if ( d[now] == 1 ) { d[now] = -i; break; }
      now /= d[now];
    }
  }
  if ( ok ) { ans = "pairwise coprime"; }

  cout << ans << endl;
  return 0;
}
