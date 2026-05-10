#include <iostream>
using namespace std;

long long power(long long n, long long k) {
    if (k == 0) return 1;
    long long smallans = power(n, k-1);
    long long ans = n * smallans;
    return ans;
}

int main() {
    long long n, k;
    cin >> n >> k;
    cout << power(n, k);
}