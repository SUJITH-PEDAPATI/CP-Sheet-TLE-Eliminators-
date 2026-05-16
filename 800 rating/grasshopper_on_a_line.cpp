#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main (){
    int t;
    cin >> t;
    while ( t-- ){
        int x,k;
        cin >> x >> k;
        vector<int>ans;
        int cnt = 0;
        if ( x%k != 0){
            cout << 1 << endl;
            cout << x << endl;
        }
        else {
            cout << 2 << endl;
            cout << x-1 << " " << 1 << "\n";
        }
    }
    return 0;
}
