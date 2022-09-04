#include <bits/stdc++.h>
using namespace std;

void solve(map<int, int> mapper) {

  for(auto x: mapper)
    if(x.second % 2 != 0) cout << x.first << endl;

}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n, a;
  cin >> t;

  while (t--) {


    cin >> n;
    map<int, int> freqMap;

    for(int i = 0; i < n; i++) {
      cin >> a;
      freqMap[a]++;
    }

    solve(freqMap);

  }
}
