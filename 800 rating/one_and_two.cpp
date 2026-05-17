#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int t;
    cin >> t;
    while ( t--){
        int n;
        cin >> n;
        vector<long long >arr(n);
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        int ans = -1;
        int cnt = 0;
        int cnt2 = 0;
        vector<int>prefixTwo(n,0);
        vector<int>suffixTwo(n,0);
        prefixTwo[0] = (arr[0] == 2);
        for (int i = 1 ; i < n; i ++){
            prefixTwo[i] = prefixTwo[i-1] + ( arr[i] == 2);
        }
        suffixTwo[n - 1] = (arr[n - 1] == 2);
        for (int i = n-2; i >= 0; i --){
            suffixTwo[i] = suffixTwo[i+1] + ( arr[i] == 2);
        }
        for (int i = 0;  i < n-1; i ++){
            if (prefixTwo[i] == suffixTwo[i+1]) {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
}