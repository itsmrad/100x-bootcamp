#include <iostream>
using namespace std;

int main() {
  int arr[10] = {11, 22, 33, 44, 55, 69, 73, 85, 91};
  int l = 0;
  int r = 9;
  int target;
  cin >> target;

  while ( l <= r ) {
    int mid = (l + r)/ 2;

    if (arr[mid] == target) {
      cout << mid+1 << endl;
      break;
    };

    if (arr[mid] > target) {
      r = mid - 1;
    }
    if (arr[mid] < target) {
      l = mid + 1;
    }

  }

  return 0;
}