#include <bits/stdc++.h>
using namespace std;

struct att {
	int num;
	int sum;
};

bool cmp(const att &a, const att &b) {
  return a.sum < b.sum;
}

int main() {
  int n;
  cin >> n;
  att a[n];
  for ( int i = 0; i < n ; i++ ) {
    cin >> a[i].sum;
    a[i].num = i+1;
  }
  sort(a, a+n, cmp);

  for ( int i = 0; i < n-1; i++ ) {
    cout << a[i].num << ' ';
  }
  cout << a[n-1].num << endl;
  return 0;
}
