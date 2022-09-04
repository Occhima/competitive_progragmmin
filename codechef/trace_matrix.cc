#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve(int n, vector<vector<int>> mat) {

  // for r, c, l
    // get the submatrice
    // calculate the trace
    // put the trace in a vector

  // return the maximum element of this vector
  // NOTE:  We can loop directly in to the main diagonal

  int sum = 0;
  vector<vector<int>> out = { {1, 2}, {1 , 2}};


    // cout << sum << endl;

  // auto max_ele = max_element(out_vec.begin(), out_vec.end());






}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n, value;

  cin >> t;
  while (t--) {

    cin >> n;
    vector<vector<int>> mat(n);

    for(int i = 0; i < n; i++)
      for(int j = 0; j < n; j++){
        cin >> value;
        mat[i].push_back(value);
      }
    solve(n, mat);
  }
}
