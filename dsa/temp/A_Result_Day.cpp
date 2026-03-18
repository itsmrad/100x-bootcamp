#include <iostream>
using namespace std;

int main() {
  int n, x;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int mark;
  cin >> mark;

  int pass = 0, fail = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] >= mark) {
      pass++;
    } else {
      fail++;
    }
  }

  cout << "Pass: " << pass << endl << "Fail: " << fail;
  return 0;
}