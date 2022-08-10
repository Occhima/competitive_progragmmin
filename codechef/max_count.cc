#include <bits/stdc++.h>
#include<map>
using namespace std;

void solve(int n, int a[]) {

  map<int, int> freqMap;

  for(int i = 0; i < n; i++) freqMap[a[i]]++;

  sort(freqMap.begin(), freqMap.end());

  // freqMap

  for(auto x: freqMap) cout << x.first << " -> " << x.second << endl;





  // cout << minElement << " " << maxFrequency << endl;

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n;

  cin >> t;

  while (t--) {
    cin >> n;
    int A[n];

    for(int i = 0; i < n; i++)
      cin >> A[i];

    solve(n, A);
  }
}
