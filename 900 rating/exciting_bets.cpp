#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int t;
    cin >> t;
    while ( t--){
        long long a, b;
        cin >> a >> b;
        if ( a== b) {
            cout << 0 << " " << 0 << endl;
            continue;
        }
        long long gcd = abs(a - b);
        long long moves = min<long long>(b%gcd,gcd-(b%gcd));
        cout << gcd << " " << moves << endl;
    }
}