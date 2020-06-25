#include <bits/stdc++.h>
using namespace std;

const int MAX_PRICE = 1251;

int main() {
  int a, b;
  cin >> a >> b;
  int price;
  bool find = false;
  for ( price = 0; price <= MAX_PRICE; price++ ) {
    if ( price*8/100 == a && price*10/100 == b ) {
      find = true;
      break;
    }
  }
  price = ( find ) ? price : -1;
  cout << price << endl;
  return 0;
}
