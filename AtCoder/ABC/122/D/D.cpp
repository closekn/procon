#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;
const char use_char[4] = { 'A', 'G', 'C', 'T' };
map<string, long long> mp[101];

string update_string(string str, char c) {
  string ret = "";
  ret += str[1];
  ret += str[2];
  ret += c;
  return ret;
}

bool is_safe_string(string str) {
  if ( str[1] == 'A' && str[2] == 'G' && str[3] == 'C' ) { return false; }
  if ( str[1] == 'G' && str[2] == 'A' && str[3] == 'C' ) { return false; }
  if ( str[1] == 'A' && str[2] == 'C' && str[3] == 'G' ) { return false; }
  if ( str[0] == 'A' && str[2] == 'G' && str[3] == 'C' ) { return false; }
  if ( str[0] == 'A' && str[1] == 'G' && str[3] == 'C' ) { return false; }
  return true;
}

long long dfs(int dep, int goal, string bef) {
  if ( dep == goal ) { return 1; }
  if ( mp[dep].count(bef) == 1 ) { return mp[dep][bef]; }

  long long ret = 0;
  for ( int i = 0; i < 4; i++ ) {
    if ( is_safe_string(bef+use_char[i]) ) {
      ret += dfs(dep+1, goal, update_string(bef, use_char[i]));
      ret %= mod;
    }
  }
  mp[dep][bef] = ret;
  return ret;
}

int main() {
  int n;
  cin >> n;
  cout << dfs(0, n, "???") << endl;
  return 0;
}
