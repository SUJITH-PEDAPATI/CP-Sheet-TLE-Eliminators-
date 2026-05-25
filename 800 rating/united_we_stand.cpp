#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long maxElementArr(vector<long long>arr){
    int n = arr.size();
    long long largest = arr[0];
    for (int i = 0; i < n; i ++){
        if ( arr[i] > largest) largest = arr[i];
    }
    return largest;
}
int main (){
    int t;
    cin >> t;
    while ( t--){
        int n;
        cin >> n;
        vector<long long>arr(n);
        for (int i = 0; i < n; i ++){
           cin >> arr[i];
        }
        vector<long long>b,c;
        long long maxElement = maxElementArr(arr);
        for (int i = 0; i < n; i ++){
            if ( arr[i] != maxElement ) b.push_back(arr[i]);
            else c.push_back(arr[i]);
        }
        if ( b.size() == 0) {
            cout << -1 << endl;
        }
        else {
            cout << b.size() << " " << c.size() << endl;
            for (auto it: b){
                cout << it << " ";
            }
            cout << endl;
            for ( auto it: c){
                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}