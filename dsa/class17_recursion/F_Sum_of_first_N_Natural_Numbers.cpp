#include <iostream>
using namespace std;

long long sumfunc( long long n) {
    if (n == 0) return 0;
    long long k = sumfunc(n-1);
    long long ans = n + k;
    return ans;
}

int main() {
    long long n;
    cin >> n;
    cout << sumfunc(n);
}