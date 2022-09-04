#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(int n, vector<int> A) {

  //Either it is the first day, or the number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
  // Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day
  // NOTE: There's defenetly a way to do this just by sorting(both ascending and descending order) the array, but im to lazy to do it rn
  // XXX: There's also a less dumb way to implement my approach using pointers
  //
  //
  //
  if (N < 2) return 1;
    int max = scores[0];
    int ret = (max > scores[1]) ? 1 : 0;
    for (int i = 1; i < N - 1; ++i) {
        const auto& s = scores[i];
        if (max < s && s > scores[i + 1])
            ++ret;
        max = std::max(max, s);
    }
    if (max < scores.back())
        ++ret;

    return ret;
}


}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, n;

  cin >> t;

  for (int j = 1; j <= t; ++j){
    cout << "Case #" << j << ": ";

    cin >> n;
    vector<int> A(n);
    for(int  i = 0; i < n; i++) cin >> A[i];

    solve(n, A);

    cout << "\n";
  }


}
