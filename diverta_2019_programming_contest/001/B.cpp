#include <bits/stdc++.h>
using namespace std;

int main() {
  int R,G,B,N,ct,r,g,b;
  cin >> R >> G >> B >> N;
  ct = 0;
  for(r=0;r*R<=N;r++){
    for(g=0;g*G<=N-r*R;g++){
      ct = ((N-r*R-g*G)%B==0) ? ct+1 : ct;
    }
  }
  cout << ct << endl;
  return 0;
}