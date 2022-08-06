#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c) {


  if((a*b ) <= c) cout << b*b*a << endl;
  else {
    if (c%b == 0) cout << (c/b)*b*b << endl;
    else  cout << (c/b)*b*b+(c%b)*(c%b) <<  endl;
  }

}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, a, b, c;

  cin >> t;

  while (t--) {
    cin >> a >> b >> c;
    solve(a, b, c);

  }

}
