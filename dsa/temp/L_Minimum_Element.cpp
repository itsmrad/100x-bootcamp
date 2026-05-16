#include <iostream>
using namespace std;

int function (int arr[], int n) {
    if (n == 0) return arr[0];
    int smallans = function(arr, n-1);
    int ans = min(smallans, arr[n-1]);
    return ans;
}

int main () {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = function(arr, n);
    cout << ans;

    return 0;
}