#include <bits/stdc++.h>
using namespace std;

const int LAND_NUM = 200001;

int main(){
    int n, q; 
    cin >> n >> q;

    vector<multiset<int>> land(LAND_NUM);
    vector<int> rate(n);
    vector<int> belong(n);
    for ( int i = 0; i < n; i++ ) {
      cin >> rate[i] >> belong[i];
      belong[i]--;
      land[belong[i]].insert(-rate[i]);
    }
    multiset<int> tops;
    for ( int i = 0; i < LAND_NUM; i++ ) {
      if ( ! land[i].empty() ) {
        tops.insert(-*begin(land[i]));
      }
    }

    while ( q-- > 0 ) {
      int c, d;
      cin >> c >> d; 
      c--;
      d--;
      int from = belong[c];
      int to = d;
      tops.erase(tops.find(-*begin(land[from])));
      land[from].erase(land[from].find(-rate[c]));
      if ( ! land[from].empty() ) {
        tops.insert(-*begin(land[from]));
      }
      if ( ! land[to].empty() ) {
        tops.erase(tops.find(-*begin(land[to])));
      }
      land[to].insert(-rate[c]);
      tops.insert(-*begin(land[to]));
      belong[c] = to;
      cout << *begin(tops) << endl;
    }

    return 0;
}