#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  long long arr[n];
  for (int i = 0; i < n; i++ ) cin >> arr[i];
  long long windowSum = 0;
  for (int i = 0; i < k; i++) windowSum += arr[i];

  long long best = windowSum;

  for (int i = k; i < n; i++) {
    windowSum += (arr[i] - arr[i-k]);

    best = max(best, windowSum);
  }
  cout << best;
  return 0;
}