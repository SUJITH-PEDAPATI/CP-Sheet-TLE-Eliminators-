#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    bool zero = false;
    sort(arr.begin(),arr.end());
    for (int i = 0; i < n; i ++){
        if ( arr[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }
    int val = 0;
    bool found = false;
    for (int i = 0; i < n; i ++){
        if ( arr[i] > 0) {
            found = true;
            val = arr[i];
            break;
        }
    }
    if (!found) val = arr[n-1];
    if ( val ) cout << abs(val) << endl;
}