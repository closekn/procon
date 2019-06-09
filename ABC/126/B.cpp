#include <bits/stdc++.h>
using namespace std;

int main() {
  int s[4];
  bool yymm, mmyy;
  for ( int i = 0; i < 4; i++ ) {
    char t;
    cin >> t;
    s[i] = t - '0';
  }
  yymm = mmyy = false;

  if (s[0] == 0 && s[1] != 0 ) { mmyy = true; }
  if ( s[0] == 1 ) {
    mmyy = (0<= s[1] && s[1] <= 2) ? true : false;
  }
  if (s[2] == 0 && s[3] != 0 ) { yymm = true; }
  if ( s[2] == 1 ) {
    yymm = (0<= s[3] && s[3] <= 2) ? true : false;
  }


  if ( yymm && mmyy ) { cout << "AMBIGUOUS" << endl; } else
  if ( yymm ) { cout << "YYMM" << endl; } else
  if ( mmyy ) { cout << "MMYY" << endl; } else
  { cout << "NA" << endl; }
  

  return 0;
}