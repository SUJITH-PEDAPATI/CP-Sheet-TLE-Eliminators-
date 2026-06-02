#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main (){
    int t;
    cin >> t;
    while ( t-- ){
        int n,q;
        cin >> n >> q;
        vector<int>arr(n);
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        vector<int>prefix(n+1,0);
        for (int i = 0; i <n; i ++){
            prefix[i+1] = prefix[i] + arr[i];
        }
        while ( q--){
            long long l,r,k;
            cin >> l >> r >> k;
            long long remove = prefix[r] - prefix[l-1];
            long long sum = prefix[n] - remove + (r-l+1)*k;
            if ( sum%2 == 0) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}