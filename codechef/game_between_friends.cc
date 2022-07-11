#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, a, b, c, d;

  cin >> t;

  while (t--) {
    cin >> a >> b >> c >> d;
    if(a < b) a  += c;
    else  b += c;
    if(a < b) a  += d;
    else  b += d;

    string out = a < b ? "S" : "N";


    cout << out;


  }
}
