#include <iostream>
using namespace std;

int main() {
  int x, n;
  cin >> x >> n;
  long long exp = 1;
  for (int i = 1; i <= n; i++) {
    exp = exp * x;
  }
  cout << exp;
  return 0;
}