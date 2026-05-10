#include <iostream>
using namespace std;

int printDecreasing(int n) {
    if (n == 0) {
        return 0;
    }
    cout << n << endl;
    return printDecreasing(n - 1);
}

int main() {
    int n;
    cin >> n;
    printDecreasing(n);

    return 0;
}