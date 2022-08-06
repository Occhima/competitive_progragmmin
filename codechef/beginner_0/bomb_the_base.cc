#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int x, int n) {

  int  count = 0, highest_index = 0;

  for(int i = 0; i  < n; i++){
    if(a[i] < x){
      highest_index = i + 1;
      count++;
    }

  }

  int max = highest_index > count ? highest_index : count;

  cout << max << endl;

}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n, x;

  cin >> t;

  while (t--) {
    cin >> n >> x;

    int a[n];

    for(int i = 0; i < n; i++)
      cin >> a[i];

    solve(a, x, n);
  }
}
