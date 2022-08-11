#include <bits/stdc++.h>
#include<map>
using namespace std;


void solve(int n, int A[]) {

  map<int, int> freqMap;
  string out = "NO";

  for(int i = 0; i < n;i++)
    freqMap[A[i]]++;

  // cout << "This is the generated map: \t"<< endl;
  // for(auto x: freqMap)
  //   cout << x.first << " -> " << x.second << endl;

  for(auto itr = freqMap.begin(); itr != freqMap.end(); itr++){

    map<int, int> mp_copy(freqMap);

    // cout << "Generated copy map: \t" << endl;

    // for(auto x: mp_copy)
    //   cout << x.first << " -> " << x.second << endl;

    mp_copy.erase(itr->first);

    // cout << "Map after delete of key: " << itr-> first << endl;

    // for(auto x: mp_copy)
    //   cout << x.first << " -> " << x.second << endl;

    int current_dominant = itr->second;

    if(all_of(mp_copy.begin(), mp_copy.end(), [&current_dominant](const auto& x) {return x.second < current_dominant;})) out = "YES";

  }

  cout << out << endl;
}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n;

  cin >> t;

  while (t--) {
    cin >> n;
    int A[n];

    for(int i =0; i < n ; i++)
      cin >> A[i];

    solve(n, A);
  }
}
