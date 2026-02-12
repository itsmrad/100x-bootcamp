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

  for (int i = 0; i < x; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < y; j++) {
        cout << arr[i][j] << " ";
      }
    } 
    if (i % 2 != 0) {
      for (int j = y-1; j >= 0; j--) {
        cout << arr[i][j] << " ";
      }
    }
  } 
  return 0;
}