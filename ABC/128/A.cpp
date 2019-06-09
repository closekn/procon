#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s[n];
  int p[n];
  bool ch[n];
  for ( int i = 0; i < n; i++ ) {
    cin >> s[i] >> p[i];
    ch[i] = true;
  }

  int pos = -1;
  string t;
  for ( int i = 0; i < n; i++ ) {
    pos = -1;
    t = "zzzzzzzzzzz";
    for ( int j = 0; j < n;  j++ ) {
      if ( s[j] < t && ch[j] ) {
        t = s[j];
        pos = j;
      } else if ( s[j] == t && ch[j] && p[j] > p[pos] ) {
        t = s[j];
        pos = j;
      }
    }
    ch[pos] = false;
    cout << pos+1 << endl;
  }

  return 0;
}