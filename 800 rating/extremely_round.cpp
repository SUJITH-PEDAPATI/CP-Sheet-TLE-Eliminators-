#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string ans = to_string(n);
        int size = ans.size();
        int firstDigit = ans[0] - '0';
        cout << 9 * (size-1) + firstDigit << endl;
        // Brute force approach
        // if (n <= 10) {
        //     cout << n << endl;
        // }
        // else if (n < 100) {
        //     cout << 10 + (ans[0] - '0' - 1) << endl;
        // }
        // else if (n < 1000) {
        //     cout << 19 + (ans[0] - '0' - 1) << endl;
        // }
        // else if (n < 10000) {
        //     cout << 28 + (ans[0] - '0' - 1) << endl;
        // }
        // else if (n < 100000) {
        //     cout << 37 + (ans[0] - '0' - 1) << endl;
        // }
        // else if (n < 1000000) {
        //     cout << 46 + (ans[0] - '0' - 1) << endl;
        // }
    }
}