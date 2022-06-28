#include <bits/stdc++.h>
using namespace std;

int sum_array(int arr[], int n){

  int result = 0;
  for(int i = 0; i < n; i++)
    result += arr[i];

  return result;

}

void print_array(int arr[], int n){
  for(int i = 0; i < n;i++)
    cout << arr[i] << "\n";


}

void solve(int candies[], int bags, int kids) {

  int total_number_of_candies = sum_array(candies, bags);

  cout << total_number_of_candies - (kids * (total_number_of_candies / kids));

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, bags, kids;

  cin >> t;

  for(int i = 1; i <= t; i++){

    cout << "Case #"<< i << ": ";
    cin >> bags >> kids;

    int candies[bags];

    for(int j = 0; j < bags; j++)

      cin >> candies[j];

    solve(candies, bags, kids);
    cout << "\n";

  }

}
