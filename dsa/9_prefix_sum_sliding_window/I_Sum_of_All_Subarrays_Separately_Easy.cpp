#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr[i] = x;
  }

  int parr[n];
  int sum = 0;
  for ( int i = 0; i < n; i++ ) {
    sum = arr[i] + sum;
    parr[i] = sum;
  }

  for ( int L = 0; L < n; L++ ) {
    for ( int R = L; R < n; R++ ) {
        int sum = 0;
        if ( L == 0 ) {
            sum = parr[R];
        } else {
            sum = (parr[R] - parr[L-1]);
        }
        cout << sum << "\n";
    }
  }
  return 0;
}