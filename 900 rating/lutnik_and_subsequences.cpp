#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int sumOfArray(vector<int>arr){
    int sum = 0;
    int n = arr.size();
    for(int i  = 0; i < n;  i++){
        sum += arr[i];
    }
    return sum;
}
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
        long long cnt0 = 0;
        long long cnt1 = 0;
        for (int i = 0; i < n; i ++){
            if ( arr[i] == 0) cnt0 ++;
            else if ( arr[i] == 1) cnt1 ++;
        }
        long long ans = pow(2,cnt0)*cnt1;
        cout << ans  << endl;;
    }
}