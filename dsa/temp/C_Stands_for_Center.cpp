#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.length();
    long long total_count = 0;

    for (int i = 0; i < n; ++i) {
        if (S[i] == 'C') {
            int left_dist = i; 
            int right_dist = n - 1 - i; 
            
            total_count += min(left_dist, right_dist) + 1;
        }
    }

    cout << total_count << endl;

    return 0;
}