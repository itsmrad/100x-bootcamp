#include <iostream>
using namespace std;

int checkVowel(char x) {
    if ( x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  int sum = 0;

  for (int i = 0; i < n; i++) {
    char element;
    cin >> element;
    arr[i] = sum + checkVowel(element);
    sum = arr[i];
  }

  int q;
  cin >> q;
  int answer[q];
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    l--;
    r--;

    if (l == 0) {
        answer[i] = arr[r];
    } else {
        answer[i] = (arr[r] - arr[l-1]);
    }
  }

  for (int i = 0; i < q; i++) {
    cout << answer[i] << endl;
  }
  return 0;
}