#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i ++) {
    int x;
    cin >> x;
    arr[i] = x;
  }

  int target;
  cin >> target;

  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}