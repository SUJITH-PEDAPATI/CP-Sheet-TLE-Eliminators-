#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while ( t--){
        int n;
        cin >> n;
        vector<int>arr(n-1);
        for (int i = 0; i < n-1; i ++){
            cin >> arr[i];
        }
        // Since the overall efficiency  of the teams should be 0
        // Calcualting the total sum of goals
        int sum = 0;
        for (int i = 0; i < n-1; i ++){
            sum += arr[i];
        }
        cout << -sum << endl;
    }
}