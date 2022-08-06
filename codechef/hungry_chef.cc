#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(int x, int y, int n, int r) {

  // maximize the number of burgers to buy
  // always buy the maximum amount of burgers and the
  // rest goes to x

  if(r/y >= n) cout << "0 " << n << endl;
  else if(r / x < n) cout << "-1" << endl;
  else {
    int k =
  }



  }




}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, x, y, n , r;

  cin >> t;

  while (t--) {

    cin >> x >> y >> n >> r;
    solve(x, y, n , r);

  }
}
