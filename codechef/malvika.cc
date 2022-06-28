#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() {}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  string ballons;

  cin >> t;

  while (t--) {

    cin >> ballons;

    int b = count(ballons.begin(), ballons.end(), 'b');
    int a = count(ballons.begin(), ballons.end(), 'a');

    cout << ((a < b) ? a : b);
    cout << "\n";
  }
}
