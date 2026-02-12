#include <iostream>
using namespace std;

void loopfunc(string a, int loop) {
  for ( int i = 0; i < loop; i++ ) {
    cout << a << endl;
  }
}

int main() {
  int loop;
  cin >> loop;
  loopfunc("I am learning functions", loop);
  return 0;
}