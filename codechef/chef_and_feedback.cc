#include <bits/stdc++.h>
#include<string>
using namespace std;

void solve1(string s) {

  if(s.find("101") == string::npos || s.find("010") == string::npos) cout << "Bad" << endl;
  else cout << "Good" << endl;

}

void solve2(char a[]){



}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  string s;

  cin >> t;

  while (t--) {
    cin >> s;
    solve1(s);
  }
}
