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
        vector<int>arr(n);
        int ans = 0;
        for(int i = 0; i < n; i ++){
            cin >> arr[i];
            ans = ans ^ arr[i];
        }
        if ( n&1 == 1) cout << ans << endl;
        else{
            if ( ans == 0) cout << 0 << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}