#include <bits/stdc++.h>
using namespace std;

long long gcd(long long m, long long n) {
	long long tmp;
	while (m % n != 0) {
		tmp = n;
		n = m % n;
		m = tmp;
	}
	return n;
}

int main() {
  long long a, b, c, d, cd;
  cin >> a >> b >> c >> d;
  cd = c*d/gcd(c, d);
  long long nc, nd, ncd;
  nc = b/c - (a-1)/c;
  nd = b/d - (a-1)/d;
  ncd = b/cd - (a-1)/cd;
  cout << (b-a+1) - (nc+nd-ncd) << endl;
  return 0;
}