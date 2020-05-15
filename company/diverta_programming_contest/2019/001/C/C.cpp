#include <bits/stdc++.h>
using namespace std;

#define AB "AB"
#define B 'B'
#define A 'A'

int contain(string s);

int main() {
  int N, i, ct, b, a, ba;
  string s;
  cin >> N;
  ct = b = a = ba = 0;
  
  for(i=0; i<N; i++) {
    cin >> s;
    if (s[0] == B && s[s.length()-1] == A) { 
      ba++;
    } else if ( s[0] == B ) {
      b++;
    } else if ( s[s.length()-1] == A ) {
      a++;
    }
    ct += contain(s);
  }

  ct += ( ba != 0 ) ? ba-1 : 0;
  if ( b > 0 && a > 0 ) {
    if ( ba != 0 ) { ct += 2; a--; b--; }
    ct += ( b > a ) ? a : b;
  } else if ( !( b == 0 && a == 0 ) ) {
    if ( ba != 0 ) { ct++; }
  }

  cout << ct << endl;
  return 0;
}

int contain(string s) {
  int ct, pos;
  ct = 0;
  pos = s.find(AB);
  while ( pos != -1 ) {
    ct++;
    s.erase(s.begin(), s.begin()+pos+2);
    pos = s.find(AB);
  }
  return ct;
}