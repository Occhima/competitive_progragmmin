#include <bits/stdc++.h>
#include<vector>
#include<tuple>
using namespace std;

typedef vector<tuple<int, int>> list_tuple;

void solve(int n, list_tuple l, int x) {

  int max_imdb_rating = 0;

  for(int i = 0; i < n; i++){
    int s, r;
    tie(s, r) = l[i];
    if(s <= x && r > max_imdb_rating) max_imdb_rating = r;
  }

  cout << max_imdb_rating << endl;

}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n, x, s, r;

  cin >> t;

  while (t--) {
    cin >> n >> x;
    list_tuple l;
    for(int i = 0; i < n; i++) {
      cin >> s >> r;
      tuple <int, int> a = make_tuple(s, r);
      l.push_back(a);
    }

    solve(n, l, x);
  }
}
