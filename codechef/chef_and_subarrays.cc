#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> A, int n) {

  int sum_of_elems= 0, prod_of_elems = 0, count = 0;


  vector<int>::iterator it = A.begin();

  for(int i = 0; i < n; i++) {
    for(int j = i; i < n - i; j++) {
      for_each(it + j, A.end(), [&] (int n) {
        sum_of_elems += n;
        prod_of_elems *= n;
      });

      cout  << "Segundo loop" << endl;
      if(sum_of_elems == prod_of_elems) count++;
    }
  }

  cout << count << endl;
}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n;

  cin >> t;

  while (t--) {
      cin  >> n;
      vector<int> arr(n);
      for(int i = 0; i < n; i++) cin >> arr[i];

      cout << "O B.O ta na função" << endl;
      solve(arr, n);
  }
}
