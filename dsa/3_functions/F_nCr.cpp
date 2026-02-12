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

long long ncr(int n, int r) {
  int result = factorial(n) / ( factorial(r) * factorial(n-r) );
  return result;
}

int main() {
  int x, y;
  cin >> x >> y;

  cout << ncr(x, y);
  return 0;
}