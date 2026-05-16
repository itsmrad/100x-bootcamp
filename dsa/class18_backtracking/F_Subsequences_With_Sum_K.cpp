#include <iostream>
#include <vector>
using namespace std;

void func(int i, long long k, long long sum, vector<int> &arr, vector<int> &result, vector<vector<int>> &all_results) {
    if (i == (arr.size())) {
        if (sum == k) {
            all_results.push_back(result);
        }
        return;
    }

    // take
    result.push_back(arr[i]);
    func(i + 1, k, sum + arr[i], arr, result, all_results);
    result.pop_back();

    // skip
    func(i + 1, k, sum, arr, result, all_results);
}

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    int i = 0;
    long long sum = 0;
    vector<int> result;
    vector<vector<int>> all_results;

    func(i, k, sum, arr, result, all_results);

    cout << all_results.size() << endl;

    for (vector<int> arr : all_results) {
        for (int i : arr) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}