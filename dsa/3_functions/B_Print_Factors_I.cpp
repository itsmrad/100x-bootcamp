#include <iostream>
using namespace std;

void factor(int num) {
  int n = 1;
  while (num >= n) {
    if ( (num % n) == 0 ) {
      cout << n << " ";
    }
    n++;
  }
}

int main() {
  int num;
  cin >> num;
  factor(num);
  return 0;
}