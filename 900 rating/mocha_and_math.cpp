#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    long long t;
    cin >> t;
    while ( t-- ){
        long long n;
        cin >> n;
        vector<long long >arr(n);
        for (int i = 0; i < n; i ++){
            cin>> arr[i];
        }
        long long totalAnd = arr[0];
        for(int i = 0; i < n; i ++){
            totalAnd = totalAnd & arr[i];
        }
        cout << totalAnd << endl;
    }
}