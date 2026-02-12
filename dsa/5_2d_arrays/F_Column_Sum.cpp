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

  for (int i=0; i < y; i++) {
    int sum = 0;
    for (int j=0; j < x; j++) {
      sum = sum+arr[j][i];
    } 
    cout << sum << " ";
  }
  return 0;
}