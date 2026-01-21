#include <iostream>
using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;

  int max = x;
  int min = x;
  if ( max < y ) max = y;
  if ( max < z ) max = z;
  if ( z < min ) min = z;
  if ( y < min ) min = y;

  cout << "Min = " << min << endl;
  cout << "Max = " << max << endl;
}