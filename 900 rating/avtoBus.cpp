#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int t;
    cin >> t;
    while ( t-- ){
        long long n;
        cin >> n;
        long long minBus = 0;
        long long maxBus = 0;
        if ( n%2 != 0 || n < 4) cout << -1 << endl;\

        else{
            minBus = (n+5)/6;
            maxBus = (n/4);
            cout << minBus << " " << maxBus << endl;
        }
    }
}