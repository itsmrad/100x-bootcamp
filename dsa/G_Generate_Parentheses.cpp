#include <iostream>
#include <vector>

using namespace std;

void pparenthesis(int open, int close , int n, vector<char> path, int count) {
    if ( (open == n) && (close == n) ) {
        for (char i : path) {
            cout << i;
        }
        cout << endl;
        count++;
    }

    // open condition
    if (open < n) {
        path.push_back('(');
        pparenthesis(open+1, close, n, path, int count);
        path.pop_back();
    }

    // close condition
    if (open > close) {
        path.push_back(')');
        pparenthesis(open, close+1, n, path, int count);
        path.pop_back();
    }
    
}

int main () {
    int n;
    cin >> n;
    int open = 0;
    int close = 0;
    vector<char> path;
    pparenthesis(open, close, n, path, count);
    
    return 0;
}