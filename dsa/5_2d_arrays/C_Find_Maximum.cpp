#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  int arr[x][y];
  for (int i=0; i < x; i++) {
    for (int j=0; j < y; j++) {
      int input;
      cin >> input;
      arr[i][j] = input;
    } 
  }

  int max = arr[0][0];
  for (int i=0; i < x; i++) {
    for (int j=0; j < y; j++) {
      if (arr[i][j] > max) max = arr[i][j];
    } 
  }

  cout << max;

  return 0;
}