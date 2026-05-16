#include <iostream>
#include <vector>
using namespace std;

void func(int n, int m, int i, int j, vector<char> &path, vector<pair<int, int>> &bombs) {

    if ( (i >= n) || (j >= m)) {
        return;
    }
    
    for (pair<int, int> bomb : bombs) {
        if ((i == bomb.first) && (j == bomb.second)) {
            return;
        }
    }

    if ((i == n-1) && (j == m-1)) {
        for (char v : path) {
            cout << v;
        }

        cout << endl;

        return;
    }

    // go right
    path.push_back('R');
    func(n, m, i, j+ 1, path, bombs);
    path.pop_back();

    // go down
    path.push_back('D');
    func(n, m, i + 1, j, path, bombs);
    path.pop_back();
}

int main () {
    int n, m;
    cin >> n >> m;
    vector<char> path;
    int x = 0;
    int y = 0;
    vector<pair<int, int>> bombs;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int p;
            cin >> p;
            if (p == 1) {
                bombs.push_back({i, j});
            }
        }
    }

    func(n, m, x, y, path, bombs);
}