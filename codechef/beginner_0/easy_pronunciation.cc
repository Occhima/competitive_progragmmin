#include <bits/stdc++.h>
using namespace std;

void solve() {


}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n;

  cin >> t;

  while (t--) {
    cin >> n;
    char vec[n];
    for(int i = 0; i < n; i++)
      cin >> vec[i];

    for(int i = 0; i < n; i++)
      cout << vec[i];

    solve();
  }
}
