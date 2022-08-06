#include <bits/stdc++.h>
using namespace std;

string solve(int scores[], int n) {

  int sum = 0 ;
  for(int i = 0; i < n; i++){
    if (scores[i] < 10) return "FAIL";
    sum = sum + scores[i];
  }

  return sum < 100 ? "FAIL" : "PASS";
}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, scores[3];

  cin >> t;

  while (t--) {
    int sum = 0;
    for(int i = 0; i < 3 ; ++i) cin >> scores[i];
    string out  = solve(scores, 3);

    cout << out << "\n";

  }
}
