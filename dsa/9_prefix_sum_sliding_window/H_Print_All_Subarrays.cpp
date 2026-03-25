#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++ ) {
        int x;
        cin >> x;
        arr[i] = x;
    }

    for ( int L = 0; L < n; L++ ) {
        for ( int R = L; R < n; R++ ) {
            for ( int i = L; i <= R; i++ ) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}