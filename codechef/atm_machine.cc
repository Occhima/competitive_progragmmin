#include <bits/stdc++.h>
using namespace std;

void solve(int A[], int k, int n) {

  for(int i = 0; i < n; i++)
    if((k - A[i]) < 0) cout << 0;
    else {
     cout << 1;
     k-= A[i];
    }
}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n, k;

  cin >> t;

  while (t--) {
    cin >> n >> k;
    int A[n];
    for(int i =0; i < n; i++)
      cin >> A[i];
    solve(A, k, n);
    cout << "\n";
  }
}
