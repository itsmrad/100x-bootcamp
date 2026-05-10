#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;

    vector<long long> arr(n);

    long long maxsum = 0;

    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
        if ( i < k ) {
            maxsum += arr[i];
        }
    }
    long long sum = maxsum;

    for ( long long l = 0, r = k; r < n; l++, r++) {
        sum = sum - arr[l] + arr[r];
        if (sum > maxsum) maxsum = sum;
    }

    cout << maxsum;
}