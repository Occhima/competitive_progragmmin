#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> arr) {

  int sum = 0, mult = 1, count = 0 ;

  for(int  i = 0; i < n; i++) {
    for(int j = i; j < n - i; j ++) {

      // Starting and Ending iterators
      auto start = arr.begin() + i;
      auto end = arr.begin() + j + 1;

      // To store the sliced vector
      vector<int> result(j - i + 1);

      // Copy vector using copy function()
      copy(start, end, result.begin());

      for(auto x: result) {
        sum += x;
        mult *= x;
      }

      if(sum == mult) count++;
    }

    sum = 0;
    mult = 1;

  }

  cout << count + arr.size() << endl;


}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n;

  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >>vec[i];
    solve(n, vec);
  }
}
