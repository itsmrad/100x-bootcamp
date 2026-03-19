#include <iostream>
using namespace std;

void arrPrint(long long arr[], int q) {
  for (int i = 0; i < q; i++) {
    cout << arr[i] << endl;
  }
}

int digitSum ( long long x) {
    int sum = 0;
    while (x != 0) {
        int lastDigit = (x % 10);
        sum = lastDigit + sum;
        x = x/10;
    }
    return sum;
}

int main() {
  int n;
  cin >> n;
  int q;
  cin >> q;
  int k;
  cin >> k;
  long long arr[n];
  int count = 0;
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    if (digitSum(x) == k) {
        count++;
    }
    arr[i] = count;
  }

  long long answer[q];

  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    r--;
    l--;
    long long ans;
    if (l == 0) {
      ans = arr[r];
    } else {
      ans = (arr[r] - arr[l - 1]);
    }
    answer[i] = ans;
  }

  arrPrint(answer, q);
  return 0;
}