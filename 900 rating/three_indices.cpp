#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        bool found = false;
        for (int i = 1; i <= n-2; i ++){
            if (( arr[i] > arr[i-1]) && ( arr[i] > arr[i+1])){
                found = true;
                cout << "YES" << endl;
                cout << i << ' ' << i+1 << ' '  << i+2 << endl;
                break;
            }
        }
        if (!found ) cout << "NO" << endl;
    }
}