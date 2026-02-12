#include <iostream>
using namespace std;

long long factorial(int num) {
  if ( num == 0 ) return 1;
  long long fac = 1;
  for ( int i = 1; i <= num; i++ ) {
    fac = fac * i;
  }
  return fac;
}

int main() {
  int x;
  cin >> x;
  cout << factorial(x);
  return 0;
}