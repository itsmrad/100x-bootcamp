#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  int arr[x][y];
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      int input;
      cin >> input;
      arr[i][j] = input;
    }
  }

  for (int j = 0; j < y; j++) {
    if (j % 2 == 0) {
      for (int i = 0; i < x; i++) {
        cout << arr[i][j] << " ";
      }
    } 
    if (j % 2 != 0) {
      for (int i = x-1; i >= 0; i--) {
        cout << arr[i][j] << " ";
      }
    }
  } 
  return 0;
}