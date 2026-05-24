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
        int operation_count = 0;
        for (int i = 1; i < n; i ++){
            if ( (arr[i-1]%2 == 0 && arr[i]%2 == 0) || (arr[i-1]%2 != 0 && arr[i]%2 != 0)) operation_count ++;
        }
        cout << operation_count << endl;
    }
}