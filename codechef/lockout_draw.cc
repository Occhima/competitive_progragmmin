#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, a, b, c;

  cin >> t;

  while (t--) {
    cin >> a >> b >> c;
    string o = (a + b + c) % 2 == 0 ? "YES" : "NO";
    cout << o  << endl;
  }
}
