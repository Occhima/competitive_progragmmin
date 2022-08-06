#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() {}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  string piano_play;

  cin >> t;

  while (t--) {

    cin >> piano_play;
    cout << ((count(piano_play.begin(), piano_play.end(), 'A') ==
              count(piano_play.begin(), piano_play.end(), 'B'))
                 ? "yes"
                 : "no");
    cout << "\n";
  }
}
