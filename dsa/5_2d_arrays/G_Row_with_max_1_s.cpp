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

  int rowno = -1;
  int result = -1;
  for (int i = 0; i < x; i++) {
    int count = -1;
    for (int j = 0; j < y; j++) {
      if (arr[i][j] == 1) {
        count++;
      }
    }
    if (count > result) {
      result = count;
      rowno = i;
    }
  }
  cout << rowno;

  return 0;
}