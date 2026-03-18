#include <iostream>
using namespace std;

string binary_search(int target, int arr[], int length) {
  int l = 0;
  int r = length - 1;

  while (r >= l) {
    int mid = (r + l)/2;

    if (arr[mid] == target) {
      return "YES";
    }
    
    if (arr[mid] > target) {
      r = mid - 1;
    }

    if (arr[mid] < target) {
      l = mid + 1;
    }
  }
  return "NO";
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for ( int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr[i] = x;
  }
  int target;
  cin >> target;

  cout << binary_search(target, arr, n);

  return 0;
}