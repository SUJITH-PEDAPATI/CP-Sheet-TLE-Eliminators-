#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPresent(const vector<int>& arr, int alpha){
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == alpha){
            return true;
        }
    }
    return false;
}

int main () { 
    int t;
    cin >> t;

    while (t--){
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){   
            cin >> arr[i];
        }
        int ans = arr[0];
        for (int i = 1; i < n; i++){
            ans = max(ans, arr[i] - arr[i-1]);
        }
        ans = max(ans, 2 * (x - arr[n-1]));
        cout << ans << endl;
    }
}