#include <bits/stdc++.h>
using namespace std;

void solve() {}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, p, c;
  cin >> t;

  while (t--) {
    int max_ele = 0;
    for (int i = 0; i < 3; i++) {
      cin >> p >> c;

      if ((p + c) > max_ele)
        max_ele = p + c;
    }
    cout << max_ele << "\n";
  }
}
