#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main () {

    int t;
    cin >> t;

    while ( t-- ){
        int n,k;
        cin >> n >> k;
        bool condition = true;
        if (n % 2 == 0 || (k % 2 == 1 && n >= k))cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}