#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  if ( n < 3 ) { cout << 0 << endl; return 0; }
  
  size_t pos = 0;
  while ( (pos = s.find("BC", pos)) != std::string::npos ) {
    s.replace(pos, 2, "D");
    pos += 1;
  }

  int a = 0, count = 0;
  for ( int i = 0; i < n; i++ ) {
    switch ( s[i] )
    {
    case 'A':
      a++;
      break;
    case 'D':
      count += a;
      break;
    default:
      a = 0;
      break;
    }
  }


  cout << count << endl;
  return 0;
}
