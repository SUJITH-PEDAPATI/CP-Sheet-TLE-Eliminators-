#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long leftProduct(vector<int>&arr,int k){
    long long product = 1;
    for (int i = 0; i < k; i ++){
        product = product * arr[i];
    }
    return product;
}

long long rightProduct(vector<int>&arr,int k){
    long long product = 1;
    for (int i = k; i < arr.size();i ++){
        product = product * arr[i];
    }
    return product;
}

int main () {
    int t;
    cin >> t;
    while ( t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        bool condition = false;
        int ans = -1;
        for (int i = 1; i < n; i ++){
            long long left_product = leftProduct(arr,i);
            long long right_product = rightProduct(arr,i);
            if (left_product == right_product){
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
}