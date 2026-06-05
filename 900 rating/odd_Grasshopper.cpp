#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while ( t-- ){
        long long x,n;
        cin >> x >> n;
        long long jumps = 0;
        if ( n%4  == 1) jumps  = -n;
        else if ( n%4 == 2) jumps = 1;
        else if ( n%4 == 3) jumps = n + 1;
        else if ( n%4 == 0) jumps = 0;

        if ( x%2 == 0) x = x + jumps;
        else x = x - jumps;
        cout << x << endl;
    }
}