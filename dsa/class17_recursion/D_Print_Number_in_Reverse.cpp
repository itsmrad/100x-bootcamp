#include <iostream>
using namespace std;

long long numInReverse(long long n) {
    if (n == 0) return 0;
    cout << n % 10;
    numInReverse(n / 10);
}

int main(){
    long long n;
    cin >> n;
    if ( n == 0 ) {
        cout << 0;
    } else {
        numInReverse(n);
    }
}