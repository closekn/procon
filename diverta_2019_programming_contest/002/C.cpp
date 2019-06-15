#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n+1];
  vector<int> p, m;
  int np = 0, nm = 0;
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
    if ( a[i] >= 0 ) { p.push_back(a[i]); np++; } else
    if ( a[i] <  0 ) { m.push_back(a[i]); nm++; }
  }
  vector<int> x, y;
  int ct = 0;
  
  if ( np == 0 && nm >= 2 ) {
    vector<int>::iterator iter = max_element(m.begin(), m.end());
    size_t index = distance(m.begin(), iter);
    int max = m[index];
    m.erase(m.begin() + index);
    iter = min_element(m.begin(), m.end());
    index = distance(m.begin(), iter);
    int min = m[index];
    m.erase(m.begin() + index);
    x.push_back(max);
    y.push_back(min);
    p.push_back(max - min);
    ct++;
    np++;
    nm -= 2;
  } else if ( nm == 0 && np > 2 ) {
    vector<int>::iterator iter = max_element(p.begin(), p.end());
    size_t index = distance(p.begin(), iter);
    int max = p[index];
    p.erase(p.begin() + index);
    iter = min_element(p.begin(), p.end());
    index = distance(p.begin(), iter);
    int min = p[index];
    p.erase(p.begin() + index);
    x.push_back(min);
    y.push_back(max);
    m.push_back(min - max);
    ct++;
    nm++;
    np -= 2;
  } else if ( nm == 0 && np == 2 ) {
    int max = (p[0] > p[1]) ? p[0] : p[1];
    int min = (p[0] < p[1]) ? p[0] : p[1];
    x.push_back(max);
    y.push_back(min);
    p.pop_back();
    p.pop_back();
    p.push_back(max-min);
    np--;
    ct++;
  }

  while ( np+nm > 1 ) {
    if ( np <= nm ) {
      x.push_back(p[np-1]);
      y.push_back(m[nm-1]);
      p[np-1] = x[ct]-y[ct];
      m.pop_back();
      nm--;
      ct++;
    } else {
      x.push_back(m[nm-1]);
      y.push_back(p[np-1]);
      m[nm-1] = x[ct]-y[ct];
      p.pop_back();
      np--;
      ct++;
    }
      
  }

  cout << x[ct-1] - y[ct-1] << endl;
  for ( int i = 0; i < ct; i++ ) {
    cout << x[i] << ' ' << y[i] << endl;
  }
  return 0;
}