#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;

int solve(int n, int x) {

  if(n < x) return 0;
  else {
    int rest = n - x;
    int buy = rest / 4;

    return rest%4 == 0 ? buy : buy + 1;
  }

}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n, x;

  cin >> t;

  while (t--) {
     cin >> n >> x;

     int i = solve(n, x);
     cout << i <<< endl;
  }
}
