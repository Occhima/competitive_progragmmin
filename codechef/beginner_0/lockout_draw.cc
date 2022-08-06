#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, a, b, c;

  cin >> t;

  while (t--) {
    cin >> a >> b >> c;

    if((a + b) == c) cout << "YES\n";
    else if((b+c) == a) cout << "YES\n";
    else if((c+a) == b) cout << "YES\n";
    else  cout << "NO\n";

  }
}
