#include <iostream>
using namespace std;

long long countSum (int arr[], int n) {
  long long sum = 0;
  for ( int i = 0; i < n; i++) {
    int left = i + 1;
    int right = n - i;

    sum += 1LL * left * right * arr[i];
  }

  return sum;
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr[i] = x;
  }

  cout << countSum(arr, n);
  return 0;
}