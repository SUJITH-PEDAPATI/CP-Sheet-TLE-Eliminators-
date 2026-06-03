#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int t;
    cin >> t;
    while ( t-- ){
        int n;
        cin >> n;
        vector<long long>arr(n);
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        // Checking the difference if the first element is kept locked and shifting is performed on the remaining elements
        long long maxDifference = INT64_MIN;
        for (int i = 1; i < n; i++){
            long long difference = arr[i] - arr[0];
            maxDifference = max<long long>(maxDifference, difference);
        }
        /// Checking if the difference if the last element is kept locked and shifting is performed on the befopre elements;
        for (int i = 0; i < n-1; i ++){
            long long difference = arr[n-1]-arr[i];
            maxDifference = max<long long>(maxDifference, difference);
        }

        // If all the elements kept rotating so they donot stay constant
        for (int i = 1; i < n; i ++){
            long long difference = arr[i-1]-arr[i];
            maxDifference = max<long long>(maxDifference, difference);

        }
        if ( maxDifference < 0) maxDifference = 0;
        cout << maxDifference << endl;
    }
}
