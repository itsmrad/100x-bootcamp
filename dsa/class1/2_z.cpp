#include <iostream>
using namespace std;

int main() {
  for (int i = 5; i > 0; i--) {
    if (i == 1 || i == 5) {
      cout << "*****";
    } else {
      for (int j = 0; j < i-1; j++) {
        cout << " ";
      };
      cout << "*";
    };
    cout << endl;
  }
  return 0;
}