#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int t;
    cin >> t;
    while ( t--){
        int a,b,n;
        cin >> a >> b >> n;
        vector<long long>arr(n);
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        int cnt = 0;
        int left = 0;
        long long ans = b;
        sort(arr.begin(),arr.end());
        for (int i = 0; i < n; i ++){
            ans += min<long long>(arr[i],a-1);
        }
        cout << ans << endl;
    }
    return 0;
}
