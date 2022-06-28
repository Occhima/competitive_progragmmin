#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void solve() {}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, t1, t2, r1, r2;

  cin >> t;
  while (t--) {
    cin >> t1 >> t2 >> r1 >> r2;

    string out = (pow(t1, 2) / pow(r1, 3)) == (pow(t2, 2) / pow(r2, 3))
                     ? "\nYes"
                     : "\nNo";

    cout << out;
  }
}
