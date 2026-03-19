#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int q;
  cin >> q;
  long long arr[n];
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    x = x * x;
    sum = sum + x;
    arr[i] = sum;
  }

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

  for (int i = 0; i < q; i++) {
    cout << answer[i] << endl;
  }
  return 0;
}