#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long arr[n];
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    if ( (i+1) % 2 == 0 ) { // checks if the indice is even
        arr[i] = (i > 0 ? arr[i-1] : 0) + x;
    } else {
        arr[i] = (i > 0 ? arr[i-1] : 0);
    }
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }

  long long q;
  cin >> q;
  long long answer[q];

  for (int i = 0; i < q; i++ ) {
    int l, r;
    cin >> l >> r;
    r--;
    l--;
    long long ans;
    if (l == 0) {
      ans = arr[r];
    } else {
      ans = (arr[r] - arr[l-1]);
    }
    answer[i] = ans;
  }

//   for (int i = 0; i < q; i++) {
//     cout << answer[i] << endl;
//   }
  return 0;
}