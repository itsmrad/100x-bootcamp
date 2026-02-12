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

  for (int i=0; i < x; i++) {
    int low = arr[i][0];
    for (int j=0; j < y; j++) {
      if (arr[i][j] < low) low = arr[i][j];
    }
    cout << low << " ";
  }
  return 0;
}