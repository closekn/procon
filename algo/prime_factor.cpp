#include <bits/stdc++.h>
using namespace std;

// 素因数分解
map< int64_t, int > prime_factor(int64_t n) {
  map< int64_t, int > ret;
  for(int64_t i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}

int main() {
  int N;
  cin >> N;
  cout << N << ":";
  map<int64_t, int> pf = prime_factor(N);
  for(auto p = pf.begin(); p != pf.end(); p++) {
    while(p->second--) cout << " " << p->first;
  }
  cout << endl;
}