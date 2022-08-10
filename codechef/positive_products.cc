#include <bits/stdc++.h>
using namespace std;

void makeCombiUtil(vector<vector<int> >& ans,
    vector<int>& tmp, int n, int left, int k)
{
    // Pushing this vector to a vector of vector
    if (k == 0) {
        ans.push_back(tmp);
        return;
    }

    // i iterates from left to n. First time
    // left will be 1
    for (int i = left; i <= n; ++i)
    {
        tmp.push_back(i);
        makeCombiUtil(ans, tmp, n, i + 1, k - 1);

        // Popping out last inserted element
        // from the vector
        tmp.pop_back();
    }
}

// Prints all combinations of size k of numbers
// from 1 to n.
vector<vector<int> > makeCombi(int n, int k)
{
    vector<vector<int> > ans;
    vector<int> tmp;
    makeCombiUtil(ans, tmp, n, 1, k);
    return ans;
}

void solve2(int n, int A[]) {

  int pos = 0, neg = 0;

  double result;

  for(int i = 0; i < n; i++)
    if(A[i] > 0) pos++;
    else if(A[i] < 0) neg++;

  result =  (pos*pos - pos + neg*neg - neg)/2;

  cout <<  result << endl;

}


int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n;

  cin >> t;

  while (t--) {
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++)
      cin >> A[i];

    solve2(n, A);

  }
}
