#include <iostream>
using namespace std;

long long sum (long long a) {
    if (a == 0) return 0;

    long long smallans = sum (a/10);

    long long ans = smallans + a % 10;
    return ans;
}

int main () {
    long long a;
    cin >> a;
    cout << sum(a);
    return 0;
}