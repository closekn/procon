#include <bits/stdc++.h>
using namespace std;

struct work
{
  long long a;
  long long b;
};

bool cmp(const work &ta, const work &tb) { return ta.b < tb.b; }

int main() {
  int n;
  cin >> n;
  vector<work> w;
  for ( int i = 0; i < n; i++ ) {
    long long ta, tb;
    cin >> ta >> tb;
    work tmp;
    tmp.a = ta; tmp.b = tb;
    w.push_back(tmp);
  }
  sort(w.begin(), w.end(), cmp);
  long long time = 0;
  string ans = "Yes";
  for ( int i = 0; i < n; i++ ) {
    time += w[i].a;
    if ( time > w[i].b ) { ans = "No"; break; }
  }

  cout << ans << endl;
  return 0;
}