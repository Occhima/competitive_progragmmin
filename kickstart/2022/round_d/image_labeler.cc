#include <bits/stdc++.h>
#include <iostream>

using namespace std;

double median(int a[], int n)
{
    // First we sort the array
    sort(a, a + n);

    // check for even case
    if (n % 2 != 0)
        return (double)a[n / 2];

    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}



void solve() {



}


int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, n, m;

  cin >> t;

  for (int j = 1; j <= t; ++j){
    cin >> n >> m;

    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];


    cout << "Case #" << j << ": ";


    solve();
    cout << "\n";
  }


}
