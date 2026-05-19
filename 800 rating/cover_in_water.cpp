#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool isConsecutiveThree = false;
        int cnt = 0;
        for (int i = 1; i < n-1; i ++){
            if ( (s[i-1] == '.' ) && (s[i] == '.') &&  (s[i + 1] == '.')){
                isConsecutiveThree = true;
                break;
            }
        }
        for (char c: s){
            if ( c == '.') cnt ++;
        }
        if ( isConsecutiveThree) cout << 2  << endl;
        else cout << cnt << endl;
    }
}
