#include <bits/stdc++.h>
#include<map>
using namespace std;

void solve(int x_a, int x_b, int x_c) {

  string winningParty = "NOTA";

  if(x_a > 50) winningParty = "A";
  else if(x_b > 50) winningParty = "B";
  else if(x_c > 50) winningParty = "C";

  cout << winningParty << endl;

}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, x_a, x_b,x_c;

  cin >> t;

  while (t--) {
    cin >> x_a >> x_b >> x_c;
    solve(x_a, x_b, x_c);
  }
}
