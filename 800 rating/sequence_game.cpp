#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int t;
    cin >> t;
    while ( t-- ){
        int n;
        cin >> n;
        vector<int>arr(n),b;
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        b.push_back(arr[0]);
        for (int i = 1; i < n; i ++){
            if ( arr[i] >= arr[i-1]){
                b.push_back(arr[i]);
            }
            else{
                b.push_back(arr[i]);
                b.push_back(arr[i]);
            }
        }
        cout << b.size() << endl;
        for (int i = 0; i < b.size(); i ++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}