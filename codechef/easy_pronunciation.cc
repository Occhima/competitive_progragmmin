#include <bits/stdc++.h>
using namespace std;

void solve(char vec[], int n) {

  int count = 0;
  string vowels = "aeiou";

  for(int i = 0; i < n; i++){
    if(vowels.find(vec[i]) == string::npos)
      for(int j = 0; j < 4; j++)
        if(i + j <= (n-1) &&  vowels.find(vec[i+j]) == string::npos )
          count++;
    if(count >= 4) break;
    else count = 0;
  }

  string out =  count >= 4 ? "NO" : "YES";
  cout << out << endl;

}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n;

  cin >> t;

  while(t--) {
    cin >> n;
    char vec[n];
    for(int i = 0; i < n; i++)
      cin >> vec[i];
    solve(vec, n);

  }

}

// input
// 5
// 5
// apple
// 15
// schtschurowskia
// 6
// polish
// 5
// tryst
// 3
// cry
//
//
