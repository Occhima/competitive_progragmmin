#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n) {
  for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";
}

template<typename T>
void swap_items(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}


void solve1(int a[], int n) {

  for(int i = 0; i < n -1 ; i++)
    for(int j = 0; j < (n - i - 1); j++)
      if(j%2 == 0) {
        if(a[j] > a[j+1])
          swap_items(a[j], a[j+1]);
      }  // even
      else {
        if(a[j] < a[j+1])
          swap_items(a[j], a[j+1]);
      }

  print_array(a, n);

}

void solve2(int a[], int n){


  for(int i = 0; i < n - 1; i++){

    if(i%2 == 0 && a[i] > a[i + 1]) swap_items(a[i], a[i + 1]); // even
    else if (i%2 == 1 && a[i] > a[i + 1]) swap_items(a[i], a[i + 1]); //odd

  }

  print_array(a, n);

}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n;

  cin >> t;

  while (t--) {
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
      cin >> a[i];

    solve2(a, n);
  }
}
