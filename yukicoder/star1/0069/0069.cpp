#include <bits/stdc++.h>
using namespace std;

#define N 26

int main() {
  string a, b;
  cin >> a;
  cin >> b;
  int len, an[N], bn[N];
  for ( int i = 0; i < N; i++ ) { an[i] = bn[i] = 0; }
  len = a.length();
  for ( int i = 0; i < len; i++ ) {
    an[a[i]-'a']++;
    bn[b[i]-'a']++;
  }
  for ( int i = 0; i < N; i++ ) {
    if ( an[i] != bn[i] ) { cout << "NO" << endl; return 0; }
  }
  cout << "YES" << endl;
  return 0;
}