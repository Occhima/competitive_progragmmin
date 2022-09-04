#include <bits/stdc++.h>

using namespace std;

void solve(int n, vector<int>A) {

  map<int, int> freqMap;

  for(int i = 0; i < n; i++) freqMap[A[i]]++;

  for(int i = 0;i < n; i++){


  }



}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n;

  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> A(n);
    for(int i = 0 ; i < n; i++) cin >> A[i];

    solve(n, A);

  }
}
