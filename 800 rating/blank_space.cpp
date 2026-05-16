#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main (){
    int t;
    cin >> t;
    while ( t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        int maxCnt = 0;
        int cnt = 0;
        int left = 0;
        int right = 0;
        while ( right < n){
            if ( arr[right] == 0){
                cnt = right - left + 1;
                maxCnt = max(maxCnt,cnt);
                right ++;
            }
            else{
                cnt = 0;
                right ++;
                left = right;
            }
        }
        cout << maxCnt << endl;
    }
}