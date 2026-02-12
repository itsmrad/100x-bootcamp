#include <iostream>
using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  int arr[x][y];
  for (int i=0; i < x; i++) {
    for (int j=0; j < y; j++) {
      int input;
      cin >> input;
      arr[i][j] = input;
    } 
  }
  string result = "false";
  for (int i=0; i < x; i++) {
    for (int j=0; j < y; j++) {
      if (arr[i][j] == z) result = "true";
    }
  }
  cout << result;
  
  return false;
}