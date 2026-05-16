#include <iostream>
#include <string>
using namespace std;

int main () {
    string sentence;
    
    cin >> sentence;

    int n;
    cin >> n;

    int len = sentence.length();

    string sub = sentence.substr(n, len - 2 * n);

    cout << sub;
}