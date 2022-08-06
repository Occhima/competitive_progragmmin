#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(int a[], int n, int m) {

  int sum = 0;
  for(int i = 0; i < n; i++)
    sum += a[i];

  cout << sum % m;

}


int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, n , m;

  cin >> t;

  for (int j = 1; j <= t; ++j){
    cout << "Case #" << j << ": ";

    cin >> n  >> m;

    int A[n];
    for(int i = 0; i<n ; i++)
      cin >> A[i];

    solve(A, n, m);
    cout << "\n";
  }


}
