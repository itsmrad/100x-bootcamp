#include <iostream>
#include <vector>
using namespace std;

void func(vector<int> &arr, int i, vector<int> &result) {
    if (i == (arr.size())) {
        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    // take
    result.push_back(arr[i]);
    func(arr, i + 1, result);
    result.pop_back();

    // skip
    func(arr, i + 1, result);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int i = 0;
    vector<int> result;
    func(arr, i, result);
    return 0;
}