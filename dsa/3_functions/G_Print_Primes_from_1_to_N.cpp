#include <iostream>
using namespace std;

string isPrime(int num) {
  if (num <= 1)
    return "Not Prime";
  if (num == 2)
    return "Prime";
  if (num % 2 == 0)
    return "Not Prime";

  for (int i = 3; i * i <= num; i++) {
    if (num % i == 0)
      return "Not Prime";
  }
  return "Prime";
}

int main() {
  int x;
  cin >> x;

  for (int i = 2; i <= x; i++) {
    if (isPrime(i) == "Prime") {
      cout << i << " ";
    }
  }
  return 0;
}