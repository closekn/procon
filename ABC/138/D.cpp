#include <bits/stdc++.h>
using namespace std;

vector<int> par;
vector<vector<int> > chi;

void root(int x, int k) {
  chi[x].push_back(k);
  if (par[x] == x) return;
  root(par[x], k);
}

int main() {
  int n, q;
  cin >> n >> q;
  int a[n-1], b[n-1];
  int p[q], x[q];
  for ( int i = 0; i < n-1; i++ ) {
    cin >> a[i] >> b[i];
  }
  for ( int i = 0; i < q; i++ ) {
    cin >> p[i] >> x[i];
  }

  int ct[n+1];
  par.push_back(0);
  for ( int i = 0; i < n+1; i++ ) {
    ct[i] = 0;
    par.push_back(0);
    vector<int> tmp;
    chi.push_back(tmp);
  }

  par[1] = 1;
  for ( int i = 0; i < n-1; i++ ) {
    par[b[i]] = a[i];
  }

  for ( int i = 1; i < n+1; i++ ) {
    root(i, i);
  }

  for ( int t = 0; t < q; t++ ) {
    for ( int i = 0; i < chi[p[t]].size(); i++ ) {
      ct[chi[p[t]][i]] += x[t];
    }
  }

  for ( int i = 1; i < n; i++ ) { cout << ct[i] << ' '; }
  cout << ct[n] << endl;
  return 0;
}
