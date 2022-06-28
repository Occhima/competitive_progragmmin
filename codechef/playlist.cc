#include <iostream>
#include <math.h>

using namespace std;

void solve(long long int i, long long int j) {

  int sol = (i) / (j * 3);
  cout << sol << endl;
}

int main() {

  long long int t, i, j;

  cin >> t;

  while (t--) {

    cin >> i >> j;

    solve(i, j);
  }

  return 0;
}
