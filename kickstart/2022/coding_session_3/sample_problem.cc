#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(vector<int> A, int n, int m) {

  int arr_sum = accumulate(A.begin(), A.end(), 0, plus<int>());

  cout << arr_sum - ((arr_sum / m) * m) << endl;


}


int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, n, m;

  cin >> t;

  for (int j = 1; j <= t; ++j){
    cout << "Case #" << j << ": ";
    cin >> n >> m;
    vector<int> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    solve(A, n, m);
    cout << "\n";
  }


}
