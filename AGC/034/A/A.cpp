#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, c, d;
  string s;
  cin >> n >> a >> b >> c >> d;
  cin >> s;

  s[a-1] = 'a';
  s[b-1] = 'b';
  s[c-1] = 'c';
  s[d-1] = 'd';
  int ct = 0;
  bool as, bs, cs, ds;
  as = bs = cs = ds = true;
  for ( int i = a-1; i < c; i++ ) {
    if ( s[i] == '#' ) {
      ct++;
    } else {
      ct = 0;
    }
    if ( ct == 2 ) { cout << "No" << endl; return 0; }
  }
  ct = 0;
  for ( int i = b-1; i < d; i++ ) {
    if ( s[i] == '#' ) {
      ct++;
    } else {
      ct = 0;
    }
    if ( ct == 2 ) { cout << "No" << endl; return 0; }
  }
  ct = 0;
  for ( int i = a-1; i < c; i++ ) {
    if ( s[i] == '#' || s[i] == 'b' ) {
      ct++;
    } else {
      ct = 0;
    }
    if ( ct == 2 ) { as = false; break; }
  }
  ct = 0;
  for ( int i = a-1; i < c; i++ ) {
    if ( s[i] == '#' || s[i] == 'd' ) {
      ct++;
    } else {
      ct = 0;
    }
    if ( ct == 2 ) { ds = false; break; }
  }
  ct = 0;
  for ( int i = b-1; i < d; i++ ) {
    if ( s[i] == '#' || s[i] == 'a' ) {
      ct++;
    } else {
      ct = 0;
    }
    if ( ct == 2 ) { bs = false; break; }
  }
  ct = 0;
  for ( int i = b-1; i < d; i++ ) {
    if ( s[i] == '#' || s[i] == 'c' ) {
      ct++;
    } else {
      ct = 0;
    }
    if ( ct == 2 ) { cs = false; break; }
  }

  s[a-1] = s[b-1] = s[c-1] = s[d-1] = '.';
  if ( (!as) && (!ds) ) {
    ct = 0;
    for ( int i = b-1; i < d; i++ ) {
      if ( s[i] == '.' ) {
        ct++;
        if ( ct == 3 ) { break; }
      } else {
        ct = 0;
      }
    }
    if ( ct != 3 ) { cout << "No" << endl; return 0; }
  }
  if ( (!bs) && (!cs) ) {
    ct = 0;
    for ( int i = a-1; i < c; i++ ) {
      if ( s[i] == '.' ) {
        ct++;
        if ( ct == 3 ) { break; }
      } else {
        ct = 0;
      }
    }
    if ( ct != 3 ) { cout << "No" << endl; return 0; }
  }

  cout << "Yes" << endl;
  return 0;
}