#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while ( t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int cnt = 0;
        bool ans = true;
        if ( d < b) {
            cout << -1 << endl;
            continue;
        }
        else{
            int diff = d-b;
            cnt = cnt + diff;
            a = a + diff;
            if ( a < c){
                cout << -1 << endl;
                continue;
            }
            int final_diff =abs(c - a);
            cnt = cnt + final_diff;
        }
        cout << cnt << endl;
    }
}