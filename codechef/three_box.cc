#include <bits/stdc++.h>
using namespace std;


void solve(int a , int b, int c, int d) {

  if(a + b + c <= d) cout << 1 << endl;
  else if(a + c <= d || b + c <= d || a + b <= d) cout << 2 << endl;
  else cout << 3 << endl;

}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, a, b, c, d;

  cin >> t;

  while (t--) {
    cin >> a >> b >> c >> d;
    solve(a, b, c, d);

  }


}
