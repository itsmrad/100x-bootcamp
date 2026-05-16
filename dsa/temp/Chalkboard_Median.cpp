#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Q;
    if (!(cin >> X >> Q)) return 0;

    priority_queue<int> lower_half;
    
    priority_queue<int, vector<int>, greater<int>> upper_half;

    lower_half.push(X);

    for (int i = 0; i < Q; ++i) {
        int A, B;
        cin >> A >> B;

        if (A <= lower_half.top()) {
            lower_half.push(A);
        } else {
            upper_half.push(A);
        }

        if (B <= lower_half.top()) {
            lower_half.push(B);
        } else {
            upper_half.push(B);
        }

        while (lower_half.size() > upper_half.size() + 1) {
            upper_half.push(lower_half.top());
            lower_half.pop();
        }
        
        while (upper_half.size() > lower_half.size()) {
            lower_half.push(upper_half.top());
            upper_half.pop();
        }

        cout << lower_half.top() << "\n";
    }

    return 0;
}