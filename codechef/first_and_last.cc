#include <array>
#include <iostream>
#include <vector>

using namespace std;

int max_ele(int a[], int n) {

  int max_element = -1;
  for (int i = 0; i < n; i++) {
    if (a[i] > max_element) {
      max_element = a[i];
    }
  }

  return max_element;
}

/*Function to get gcd of a and b*/
int gcd(int a, int b) {
  if (b == 0)
    return a;

  else
    return gcd(b, a % b);
}

/*Function to left rotate arr[] of siz n by d*/
void left_rotate(int arr[], int d, int n) {
  /* To handle if d >= n */
  d = d % n;
  int g_c_d = gcd(d, n);
  for (int i = 0; i < g_c_d; i++) {
    /* move i-th values of blocks */
    int temp = arr[i];
    int j = i;

    while (1) {
      int k = j + d;
      if (k >= n)
        k = k - n;

      if (k == i)
        break;

      arr[j] = arr[k];
      j = k;
    }
    arr[j] = temp;
  }
}

void solve(int arr[], int n) {

  int out_vector[n];

  for (int i = 0; i < n; i++) {
    left_rotate(arr, 1, n);

    out_vector[i] = arr[0] + arr[n - 1];
  }

  cout << max_ele(out_vector, n) << " ";
}

int main() {

  int testcases, n;

  while (testcases--) {

    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    solve(a, n);
  }
}
