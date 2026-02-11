#include <iostream>
using namespace std;

int main() {
  long long x, sum = 0;
  cin >> x;
  if (x == 0) {
    sum = 0;
  } else {
    while(x != 0) {
      sum = sum + (x%10);
      x = (x/10);
    }
  }
  cout << sum;
  return 0;
}