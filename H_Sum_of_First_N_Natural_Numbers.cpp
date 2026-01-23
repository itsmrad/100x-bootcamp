#include <iostream>
using namespace std;

int main() {
  int x, y=0;
  cin >> x;
  for (int i = 1; i <= x; i++) {
    y = y+i;
  }
  cout << y;
  return 0;
}