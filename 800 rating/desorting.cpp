#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
    int t;
    cin >> t;
    while ( t-- ){
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        bool desorted = false;
        for (int i = 1; i < n; i ++){
            if ( arr[i-1] > arr[i]) {
                desorted = true;
                break;
            }
        }
        int d = 1e9;
        for (int i = 0; i < n-1; i ++){
            d = min(d,(arr[i+1]-arr[i]));
        }
        if (desorted) cout << 0 << endl;
        else cout << ((d/2) + 1) << endl;
    }
}