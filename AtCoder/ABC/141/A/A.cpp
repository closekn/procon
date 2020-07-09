#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> weather = {"Sunny", "Cloudy", "Rainy"};
  string s;
  cin >> s;
  cout << weather[ (distance(weather.begin(), find(weather.begin(), weather.end(), s)) + 1) % weather.size() ] << endl;
  return 0;
}
