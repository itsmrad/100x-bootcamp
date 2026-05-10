#include <iostream>
using namespace std;

long long factorial(long long n) {
    if (n == 0) return 1 ;

    long long smallans = factorial(n-1);
    
    long long ans = n * smallans;
    return ans;
}


int main() {
    long long n; 
    cin >> n;
    cout << factorial(n);
}