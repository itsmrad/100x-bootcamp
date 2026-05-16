#include <iostream>
#include <vector>
using namespace std;

void printPath(int cur, int n, int k, vector<int> &path) {
    if (cur == n) {
        for (int i =0; i < path.size(); i++) {
            cout << path[i] << " ";
        }
        cout << endl;
        return;
    }


    for (int i = 1; i <= k; i++) {
        if (cur + i > n) break;

        // jump k steps
        path.push_back(i);
        printPath(cur + i, n, k, path);
        path.pop_back();
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> path;

    printPath(0, n, k, path);
    
    return 0;
}