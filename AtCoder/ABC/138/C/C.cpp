#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<double> v;
  for ( int i = 0; i < n; i++ ) {
    double t;
    cin >> t;
    v.push_back(t);
  }
  sort(v.begin(), v.end());

  for ( int i = 1; i < n; i++ ) {
    v[i] = (v[i-1]+v[i])/2.0;
    sort(v.begin()+1, v.end());
  }

  printf("%.14f\n", v[n-1]);
  return 0;
}
