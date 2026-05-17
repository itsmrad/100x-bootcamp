#include <iostream>
using namespace std;

long long function (long long arr[], long long n) {
    if (n == 1) return arr[0];
    long long smallans = function(arr, n-1);
    long long ans = smallans + arr[n-1];
    return ans;
}

int main () {
    long long n;
    cin >> n;
    long long arr[n];

    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long ans = function(arr, n);
    cout << ans;

    return 0;
}