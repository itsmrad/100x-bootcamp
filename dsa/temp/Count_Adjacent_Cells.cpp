#include <iostream>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    for (int i = 1; i <= H; ++i) {
        for (int j = 1; j <= W; ++j) {
            int adjacent_count = 0;

            if (i > 1) adjacent_count++;
            
            if (i < H) adjacent_count++;
            
            if (j > 1) adjacent_count++;
            
            if (j < W) adjacent_count++;
            
            cout << adjacent_count;
            if (j < W) {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}