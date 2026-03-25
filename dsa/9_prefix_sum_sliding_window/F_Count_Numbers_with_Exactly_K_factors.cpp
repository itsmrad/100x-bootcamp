  #include <iostream>
  using namespace std;

  void arrPrint(long long arr[], int q) {
    for (int i = 0; i < q; i++) {
      cout << arr[i] << endl;
    }
  }

  int factorCount ( long long x) {
      long long count = 0;
      for (int i = 1; i * i <= x; i++) {
        if ((x % i) == 0) {
          if ((i*i) == x) {
            count++;
          } else {
            count = count + 2;
          }
        }
      }
      return count;
  }

  int main() {
    // N number of array
    int n;
    cin >> n;
    // number of query
    int q;
    cin >> q;
    // number of factor the number must have
    int k;
    cin >> k;
    long long arr[n];
    int count = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      long long x;
      cin >> x;
      
      if (factorCount(x) == k) {
        sum++;
        arr[i] = sum;
      } else {
        arr[i] = sum;
      }
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