#include <iostream>
using namespace std;

int printIncreasing(int n) {
    if (n == 0) return 0;
    printIncreasing(n-1);
    cout << n << endl;
    return 0;
}

int main() {
    int n;
    cin >> n;
    printIncreasing(n);
}