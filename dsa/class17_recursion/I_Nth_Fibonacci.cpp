#include <iostream>
using namespace std;

int f(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    int smallans1 = f(n-1);
    int smallans2 = f(n-2);

    int ans = smallans1 + smallans2;
    return ans;
}

int main () {
    int n;
    cin >> n;
    cout << f(n);
}