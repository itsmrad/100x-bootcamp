#include <iostream>
using namespace std;

int zigzag(int n) {
    if (n <= 0) return 0;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    cout << n << endl;
    zigzag(n-1);
    cout << n << endl;
    return 0;
}

int main() {
    int n;
    cin >> n;
    zigzag(n);
    return 0;
}