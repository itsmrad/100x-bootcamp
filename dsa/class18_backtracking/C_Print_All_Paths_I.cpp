#include <iostream>
#include <vector>
using namespace std;

void func(int n, int m, int i, int j, vector<char> &path) {

    if ((i == n-1) && (j == m-1)) {
        for (char v : path) {
            cout << v;
        }

        cout << endl;

        return;
    }

    if ( (i >= n) || (j >= m)) {
        return;
    }

    // go right
    path.push_back('R');
    func(n, m, i, j+ 1, path);
    path.pop_back();

    // go down
    path.push_back('D');
    func(n, m, i + 1, j, path);
    path.pop_back();
}

int main () {
    int n, m;
    cin >> n >> m;
    vector<char> path;
    int i = 0;
    int j = 0;

    func(n, m, i, j, path);
}