#include <bits/stdc++.h>
#include<string>

using namespace std;

void solve(string kingdom) {

  string vowels = "AEIOUaeiou";
  string res;

  if (kingdom.back() == 'y' || kingdom.back() == 'Y') res = "nobody.";
  else if( vowels.find(kingdom.back()) != string::npos )  res  = "Alice.";
  else res = "Bob.";

  cout << kingdom << "is ruled by " << res;

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  string kingdom;

  cin >> t;

  for(int i = 1; i <= t; i++) {

    cin >> kingdom;

    cout << "Case #"<< i << ": ";

    solve(kingdom);

    cout << "\n";

  }


}
