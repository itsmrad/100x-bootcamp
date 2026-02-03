#include <iostream>
using namespace std;

int main() {
  int y, p = 0, n = 0, e = 0, o = 0;
  cin >> y;
  for (int i = 1; i <= y; i++) {
    int x;
    cin >> x;
    if (x > 0)
      p++;
    if (x < 0)
      n++;
    if (x != 0) {
      if (x % 2 == 0)
        e++;
      else
        o++;
    } else {
      e++;
    }
  }

  cout << p << endl;
  cout << n << endl;
  cout << e << endl;
  cout << o << endl;
  return 0;
}