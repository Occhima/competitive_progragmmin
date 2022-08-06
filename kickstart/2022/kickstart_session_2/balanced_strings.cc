#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(int l, int r) {

  int min = l < r ? l : r;

  cout << min * (min + 1) / 2;

}


int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, l, r;

  cin >> t;

  for (int j = 1; j <= t; ++j){
    cout << "Case #" << j << ": ";
    cin >> l >> r;
    solve(l, r);
    cout << "\n";
  }


}
