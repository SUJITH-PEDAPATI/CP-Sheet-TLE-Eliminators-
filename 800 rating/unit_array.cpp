#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        int neg = 0;
        int pos = 0;
        for (int i = 0;i < n; i ++){
            if ( arr[i] < 0) neg ++;
            else pos ++;
        }
        int cnt = 0;
        while ( (neg > pos) || (neg%2 != 0)){
            neg --;
            pos ++;
            cnt ++;
        }
        cout << cnt << endl;
    }
    return 0;
}