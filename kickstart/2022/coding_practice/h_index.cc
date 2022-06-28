#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {

  int h_score = 0;
  vector<int> citations(n + 1, 0);

  cout << h_score << " ";
}
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n;

  cin >> t;

  for (int i = 1; i <= t; i++) {

    cin >> n;
    int a[n];

    for (int j = 0; j < n; j++)
      cin >> a[j];

    cout << "Case #" << i << ": ";

    solve(a, n);

    cout << "\n";
  }
}
