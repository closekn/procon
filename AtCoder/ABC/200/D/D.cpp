#include <bits/stdc++.h>
using namespace std;

vector<int> chain_vec(vector<int> b, vector<int> c) {
  vector<int> ret;
  for ( int i = 0; i < b.size(); i++ ) { ret.push_back(b[i]); }
  for ( int i = 0; i < c.size(); i++ ) { ret.push_back(c[i]); }
  return ret;
}

bool same_vec(vector<int> b, vector<int> c) {
  if ( b.size() != c.size() ) { return false; }
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  for ( int i = 0; i < b.size(); i++ ) {
    if ( b[i] != c[i] ) { return false; }
  }
  return true;
}

bool cant_add(vector<int> b, vector<int> c) {

  for ( int i = 0; i < b.size(); i++ ) {
    for ( int j = 0; j < c.size(); j++ ) {
      if ( b[i] == c[j] ) { return true; }
    }
  }

  return false;
}

string make_str(int n, vector<int> a) {
  string ret = "";
  ret += to_string(n) + " ";

  sort(a.begin(), a.end());
  for ( int i = 0; i < n-1; i++ ) {
    ret += to_string(a[i]+1) += " ";
  }
  ret += to_string(a[n-1]+1);

  return ret;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  int use[200] = {};
  vector<int> use_i[200];

  string can = "No";
  string ans = "";

  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
    a[i] %= 200;
    if ( use[a[i]] == 0 ) {
      use[a[i]]++;
      use_i[a[i]].push_back(i);
    } else {
      can = "Yes";
      vector<int> tmp;
      tmp.push_back(i);
      ans = make_str(1, use_i[a[i]]) + "\n" + make_str(1, tmp);
      break;
    }
  }

  int new_num;
  while ( 1 ) {
    if ( can == "Yes" ) { break; }
    new_num = 0;

    for ( int i = 0; i < 200-1; i++ ) {
      if ( can == "Yes" ) { break; }
      if ( use[i] == 0 ) { continue; }
      for ( int j = i+1; j < 200; j++ ) {
        if ( can == "Yes" ) { break; }
        if ( use[j] == 0 ) { continue; }
        if ( cant_add(use_i[i], use_i[j]) ) { continue; }

        int num = (i+j) % 200;
        if ( use[num] == 0 ) {
          new_num++;
          use[num]++;
          use_i[num] = chain_vec(use_i[i], use_i[j]);
        } else {
          vector<int> tmp = chain_vec(use_i[i], use_i[j]);
          if ( !same_vec(use_i[num], tmp) ) {
            can = "Yes";
            ans = make_str(use_i[num].size(), use_i[num]) + "\n" + make_str(tmp.size(), tmp);
            break;
          }
        }
      }
    }

    if ( new_num == 0 ) { break; }
  }

  cout << can << endl;
  if ( can == "Yes" ) { cout << ans << endl; }
  return 0;
}
