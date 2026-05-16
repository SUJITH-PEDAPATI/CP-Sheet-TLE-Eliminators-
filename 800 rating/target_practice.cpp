#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<char>> scoreBoard(10, vector<char>(10));
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> scoreBoard[i][j];
            }
        }
        int score = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (scoreBoard[i][j] == 'X') {
                    int layer = min(min(i, j), min(9 - i, 9 - j));
                    score += (layer + 1);
                }
            }
        }
        cout << score << endl;
    }
}