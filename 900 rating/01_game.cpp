#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    int t;
    cin >> t;
    while ( t-- ){
        string s;
        cin >> s;
        long long count0 = 0;
        long long count1 = 0;
        for (int i = 0; i < s.size(); i ++){
            if (s[i] == '0') count0 ++;
            else if ( s[i] == '1') count1 ++;
        }
        long long minVal = min<long long>(count0,count1);
        if ( (minVal % 2) != 0) cout << "DA" << endl;
        else cout << "NET" << endl;
    }
}