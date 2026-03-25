  #include <iostream>
  using namespace std;

  void arrPrint(long long arr[], int q) {
    for (int i = 0; i < q; i++) {
      cout << arr[i] << endl;
    }
  }

  int main() {
    // N number of array
    int n;
    int q;
    cin >> n >> q;
    long long arr[n];

    for (int i = 0; i < n; i++) {
      long long x;
      cin >> x;

      long long signedValue = (i % 2 == 0) ? x : -x;
      if (i == 0) {
        arr[i] = signedValue;
      } else {
        arr[i] = arr[i - 1] + signedValue;
      }
    }

    long long answer[q];

    for (int i = 0; i < q; i++) {
      int l, r;
      cin >> l >> r;
      r--;
      l--;
      long long raw = arr[r] - (l > 0 ? arr[l - 1] : 0);
      long long ans = (l % 2 == 0) ? raw : -raw;
      answer[i] = ans;
    }

    arrPrint(answer, q);
    return 0;
  }