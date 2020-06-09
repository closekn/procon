#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string in1[n], in2[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> in1[i];
    cin >> in2[i];
  }

  for ( int i = 0; i < n; i++ ) {
    string ans = "YES";
    int ct = 0;
    if ( in1[i].length() > in2[i].length() ) {
      ans = "NO";
    } else {
      for ( int j = 0; j < in1[i].length(); j++ ) {
        if ( ct >= in2[i].length() ) { ans = "NO"; break; }
        if ( in1[i][j] != in2[i][ct] ) { ans = "NO"; break; }
        if ( j < in1[i].length()-1 && in1[i][j] == in1[i][j+1] ) {
          ct++;
        } else {
          while ( in1[i][j] == in2[i][ct] ) { ct++; }
        }
      }
      if ( ct < in2[i].length() ) { ans = "NO"; }
    }

    cout << ans << endl;
  }

  return 0;
}