#include <bits/stdc++.h>
#include<vector>
using namespace std;

void print_matrix(vector<vector<int>> mat) {

  int n = mat.size();

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
        cout << mat[i][j] << " \n"[j == n-1];

}

void solve(int n, vector<vector<int>> mat) {

  vector<int> max_trace;

  int max_item = *max_element(max_trace.begin(), max_trace.end());
  cout << max_item << endl;
}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n, aux;
  cin >> t;

  while (t--) {

    cin >> n;
    vector<vector<int>> mat;
    for(int i = 0; i< n ; i++){
      vector<int> arr;
      for(int i = 0; i< n ; i++){
        cin >> aux;
        arr.push_back(aux);
      }
      mat.push_back(arr);
    }

    solve(n, mat);
  }

}
