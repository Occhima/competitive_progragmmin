#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, number;
  cin >> t;

  for (int i = 1; i <= t; ++i) {

    cin >> number;
    int j = 0, counter = 0;
    vector<int> vec;

    while (number) {
      if (number % 10 == 4) {
        counter++;
      }
      number /= 10;
    }

    cout << counter << "\n";
  }
}
