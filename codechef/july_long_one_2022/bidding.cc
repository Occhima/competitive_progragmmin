
#include <bits/stdc++.h>
using namespace std;

void solve() {

  cout << "Oi porran";

}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, A[3];
  string winners[3]= {"Alice", "Bob", "Charlie"};

  cin >> t;

  while (t--) {

    for(int i =0; i < 3; ++i) cin >> A[i];

    cout  <<  winners[max_element(A, A+3) - A] << "\n";

    // solve();
  }
}
