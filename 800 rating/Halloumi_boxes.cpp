#include <iostream>
#include <vector>
using namespace std;

int main () {
    int t;
    cin >> t;
    while ( t-- ){
        int n,k;
        cin >> n >> k;
        vector<int> arr(n+1);
        for (int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        if ( k > 1) {
            cout << "Yes" << endl;
            continue;
        }
        bool condition = true;
        for (int i = 1; i < n; i ++){
            if ( arr[i] < arr[i-1]){
                condition = false;
                break;
            }
        }
        if (condition) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}