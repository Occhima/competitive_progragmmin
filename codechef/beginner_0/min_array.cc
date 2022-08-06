#include <iostream>
#include <vector>

using namespace std;

int main() {

  int t, n, pcount = 0, mcount = 0;
  int A[n];
  cin >> t;

  while (t--) {
    cin >> n;

    for (int i = 0; i < n; i++) {
      cin >> A[i];
      if (A[i] == 1) {
        pcount++;
      }

      else {
        mcount++;
      }
    }

    int m = pcount - mcount;

    if (n % 2 != 0)
      cout << -1 << endl;

    else
      cout << (m / 2) << endl;
  }
}
