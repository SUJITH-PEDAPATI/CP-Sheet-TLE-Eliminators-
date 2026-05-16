#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSorted(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (isSorted(arr)) {
            cout << "YES\n";
            continue;
        }
        bool ok = false;
        for (int step = 0; step < n; step++) {
            for (int i = 1; i < n - 1; i++) {
                if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                }
            }

            if (isSorted(arr)) {
                cout << "YES\n";
                ok = true;
                break;
            }
        }

        if (!ok) cout << "NO\n";
    }
}