#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int c0 = 0, c1 = 0, c2 = 0;
    
    for (int i = 0; i < n; i++) {
        int w;
        cin >> w;
        if (w == 0) c0++;
        else if (w == 1) c1++;
        else if (w == 2) c2++;
    }
    
    int max_operations = c0 + min(c1, c2) + abs(c1 - c2) / 3;
    
    cout << max_operations << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}