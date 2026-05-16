#include <iostream>
#include <vector>
using namespace std;

void printPath(int cur, int n, vector<int> path) {
    if (cur == n) {
        for (int i =0; i < path.size(); i++) {
            cout << path[i] << " ";
        }
        cout << endl;
        return;
    }

    if (cur > n) {
        return;
    }

    // jump 1 step
    path.push_back(1);
    printPath(cur + 1, n, path);
    path.pop_back();

    // jump 2 steps
    path.push_back(2);
    printPath(cur + 2, n, path);
    path.pop_back();
}

int main() {
    int n;
    cin >> n;

    vector<int> path;

    printPath(0, n, path);
    
    return 0;
}