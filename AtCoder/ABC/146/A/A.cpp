#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> days = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
  string d;
  cin >> d;
  cout << 7 - distance(days.begin(), find(days.begin(), days.end(), d)) << endl;
  return 0;
}
