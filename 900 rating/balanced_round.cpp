#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int t;
    cin >> t;
    while ( t-- ){
        long long n, k ;
        cin >> n >> k;
        vector<long long>arr(n);
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        long long cnt = 1;
        long long maxCnt = 1;
        sort(arr.begin(),arr.end());
        for (int i = 1; i < n; i ++){
            if (abs(arr[i]-arr[i-1]) <= k) {
                cnt ++;
            }
            else {
                cnt = 1;
            }
            maxCnt = max(maxCnt,cnt);
        }
        cout << n-maxCnt<< endl;
    }
    return 0;
}
